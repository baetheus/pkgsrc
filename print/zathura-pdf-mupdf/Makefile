# $NetBSD: Makefile,v 1.38 2020/01/18 21:50:33 jperkin Exp $
#

DISTNAME=	zathura-pdf-mupdf-0.3.5
PKGREVISION=	3
CATEGORIES=	print
MASTER_SITES=	https://pwmt.org/projects/zathura/plugins/download/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	leot@NetBSD.org
HOMEPAGE=	https://pwmt.org/projects/zathura-pdf-mupdf/
COMMENT=	Add PDF support to zathura using mupdf rendering engine
LICENSE=	zlib

USE_TOOLS+=	pkg-config

# Link to external dependencies (jpeg, jbig2dec, openjpeg)
MESON_ARGS+=	-D link-external=true

CPPFLAGS+=	-D_XOPEN_SOURCE=600

.include "../../devel/meson/build.mk"
.include "../../graphics/cairo/buildlink3.mk"
BUILDLINK_API_DEPENDS.mupdf+=	mupdf>=1.16.0
.include "../../print/mupdf/buildlink3.mk"
.include "../../print/zathura/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
