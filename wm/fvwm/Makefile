# $NetBSD: Makefile,v 1.42 2020/01/19 22:16:18 maya Exp $

DISTNAME=	fvwm-${FVWM_VER}
CATEGORIES=	x11 wm
MASTER_SITES=	${MASTER_SITE_GITHUB:=fvwmorg/}
GITHUB_RELEASE=	${FVWM_VER}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.fvwm.org/
COMMENT=	Newer version of X11 Virtual window manager
LICENSE=	gnu-gpl-v2

CONFLICTS=	fvwm1-[0-9]* fvwm2-[0-9]* metisse-[0-9]* xpmroot-[0-9]*
FVWM_VER=	2.6.9

GNU_CONFIGURE=		YES
USE_TOOLS+=		perl:run tar pkg-config

PLIST_SUBST+=		FVWM_VER=${FVWM_VER:Q}

INSTALLATION_DIRS+=	lib/X11/fvwm2
INSTALLATION_DIRS+=	lib/X11/fvwm2/pixmaps
INSTALLATION_DIRS+=	${PKGMANDIR}/man1

CONFIGURE_ARGS+=	--sysconfdir=${PREFIX}/lib/X11/fvwm2
CONFIGURE_ARGS+=	--libexecdir=${PREFIX}/lib/X11
CONFIGURE_ARGS+=	--with-xpm-includes=${BUILDLINK_PREFIX.libXpm}/include
CONFIGURE_ARGS+=	--with-imagepath=${PREFIX}/lib/X11/fvwm2/pixmaps:${X11BASE}/include/X11/bitmaps:${X11BASE}/include/X11/pixmaps

# We don't want to have CPP from the buildlink directory
CONFIGURE_ENV+=		ac_cv_path_FVWM_CPP=${CPP:Q}
# To avoid ${WRKDIR} is included in perl script
CONFIGURE_ENV+=		ac_cv_path_PERL=${PERL5:Q}

.include "../../lang/python/application.mk"
# fvwm-menu-desktop requires python3 and requires python-xdg at runtime.
PYTHON_VERSIONS_INCOMPATIBLE=	27
DEPENDS+=			${PYPKGPREFIX}-xdg-[0-9]*:../../devel/py-xdg
CONFIGURE_ENV+=			PYTHON=${PYTHONBIN}
CONFIGURE_ENV+=			ac_cv_path_PYTHON=${PYTHONBIN:Q}

# 2 manpages want xsltproc.
CONFIGURE_ARGS+=	--enable-mandoc
BUILD_DEPENDS+=		docbook-xsl-[0-9]*:../../textproc/docbook-xsl
BUILD_DEPENDS+=		libxslt-[0-9]*:../../textproc/libxslt

.include "options.mk"

BUILDLINK_DEPMETHOD.libXt?=	build

.include "../../devel/libstroke/buildlink3.mk"
.include "../../devel/readline/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../x11/libSM/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXinerama/buildlink3.mk"
.include "../../x11/libXpm/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
