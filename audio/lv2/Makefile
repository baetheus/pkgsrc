# $NetBSD: Makefile,v 1.18 2020/01/26 17:30:43 rillig Exp $

DISTNAME=	lv2-1.16.0
PKGREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://lv2plug.in/spec/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://lv2plug.in/
COMMENT=	Open standard for audio plugins, used by hundreds of plugins
LICENSE=	isc

USE_TOOLS+=	pkg-config

PKGCONFIG_OVERRIDE+=	lv2/lv2plug.in/ns/lv2core/lv2core.pc.in
PKGCONFIG_OVERRIDE+=	lv2.pc.in

REPLACE_PYTHON+=	lv2specgen/lv2specgen.py

.include "options.mk"

WAF_ARGS+=	${BUILD_DEBUG} ${BUILD_DOC} ${BUILD_TESTS} ${BUILD_VALGRIND}
WAF_ARGS+=	--copy-headers

.include "../../devel/waf/waf.mk"
BUILDLINK_API_DEPENDS.cairo+=	cairo>=1.8.10
.include "../../graphics/cairo/buildlink3.mk"
BUILDLINK_API_DEPENDS.gtk2++=	gtk2+>=2.18.0
.include "../../x11/gtk2/buildlink3.mk"
BUILDLINK_API_DEPENDS.libsndfile+=	libsndfile>=1.0.0
.include "../../audio/libsndfile/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
