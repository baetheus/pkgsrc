# $NetBSD: Makefile,v 1.9 2020/02/13 13:46:23 fcambus Exp $

DISTNAME=	spleen-1.7.0
CATEGORIES=	fonts
MASTER_SITES=	${MASTER_SITE_GITHUB:=fcambus/}
GITHUB_RELEASE=	${PKGVERSION_NOREV}

MAINTAINER=	fcambus@NetBSD.org
HOMEPAGE=	https://github.com/fcambus/spleen/
COMMENT=	Monospaced bitmap fonts
LICENSE=	2-clause-bsd

USE_LANGUAGES=	# none
USE_TOOLS+=	gzip

FONTDIR=		${PREFIX}/share/fonts/X11/spleen
FONTS_DIRS.x11+=	${FONTDIR}
INSTALLATION_DIRS=	${FONTDIR}

do-build:
	${GZIP_CMD} ${WRKSRC}/*.pcf

do-install:
	${INSTALL_DATA}	${WRKSRC}/fonts.alias-spleen	\
	  ${DESTDIR}${FONTDIR}/fonts.alias
	${INSTALL_DATA}	${WRKSRC}/*.pcf.gz ${DESTDIR}${FONTDIR}

.include "../../mk/bsd.pkg.mk"
