# $NetBSD: Makefile,v 1.14 2020/01/18 23:35:57 rillig Exp $

DISTNAME=	BWidget-1.9.0
PKGNAME=	tk-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=tcllib/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://tcllib.sourceforge.net/
COMMENT=	High-level Widget Set for Tcl/Tk

LICENSE=	mit

DEPENDS+=	tcl>=8.4:../../lang/tcl
DEPENDS+=	tk>=8.4:../../x11/tk

NO_BUILD=	YES
NO_CONFIGURE=	YES

USE_TOOLS+=	bsdtar

PLIST_SUBST+=	BWDIR=${DISTNAME}

INSTALLATION_DIRS=	lib/tcl

do-install:
	cd ${DESTDIR}${PREFIX}/lib/tcl && ${TOOLS_PATH.bsdtar} zxpf ${DISTDIR}/${DISTFILES:Q} --exclude=CVS
	${CHOWN} -R ${SHAREOWN}:${SHAREGRP} ${DESTDIR}${PREFIX}/lib/tcl/${DISTNAME}

.include "../../mk/bsd.pkg.mk"
