# $NetBSD: Makefile,v 1.25 2020/01/18 23:31:06 rillig Exp $

DISTNAME=	# empty
PKGNAME=	ms-ttf-20020306
PKGREVISION=	6
CATEGORIES=	fonts
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=corefonts/}
DISTFILES=	andale32.exe webdin32.exe trebuc32.exe georgi32.exe \
		verdan32.exe comic32.exe arialb32.exe impact32.exe \
		arial32.exe times32.exe courie32.exe

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://corefonts.sourceforge.net/
COMMENT=	TrueType fonts from Microsoft
LICENSE=	ms-ttf-license

RESTRICTED=	No redistribution in altered form

BUILD_DEPENDS+=	cabextract-[0-9]*:../../archivers/cabextract

NO_BIN_ON_CDROM=	${RESTRICTED}
NO_BIN_ON_FTP=		${RESTRICTED}
NO_SRC_ON_CDROM=	${RESTRICTED}

DIST_SUBDIR=	ms-ttf
EXTRACT_CMD=	${LOCALBASE}/bin/cabextract -q $${extract_file}
DOCDIR=		${PREFIX}/share/doc/ms-ttf

INSTALLATION_DIRS+=	${DOCDIR}

post-extract:
	${RUN}								\
	for f in ${WRKSRC}/*.TTF ; do					\
		${MV} $$f `${ECHO} $$f | ${SED} 's|TTF$$|ttf|'`;	\
	done

do-install:
	${INSTALL_DATA} ${.CURDIR}/../../licenses/${LICENSE} ${DESTDIR}${DOCDIR}

.include "../../mk/fonts.mk"
.include "../../mk/bsd.pkg.mk"
