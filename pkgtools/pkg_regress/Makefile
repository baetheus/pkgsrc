# $NetBSD: Makefile,v 1.17 2019/12/17 15:38:43 rillig Exp $

PKGNAME=	pkg_regress-0.5
CATEGORIES=	pkgtools

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Run pkgsrc infrastructure regression test suite

WRKSRC=		${WRKDIR}
USE_LANGUAGES=	# none
NO_BUILD=	yes
AUTO_MKDIRS=	yes

SUBST_CLASSES+=		regress
SUBST_STAGE.regress=	pre-configure
SUBST_FILES.regress=	pkg_regress.sh
SUBST_VARS.regress=	MAKE PKGSRCDIR SH EGREP

do-extract:
	${CP} ${FILESDIR}/pkg_regress.sh ${WRKSRC}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pkg_regress.sh \
		${DESTDIR}${PREFIX}/sbin/pkg_regress

.include "../../mk/bsd.pkg.mk"
