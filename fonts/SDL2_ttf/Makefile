# $NetBSD: Makefile,v 1.12 2020/01/26 17:31:10 rillig Exp $

DISTNAME=	SDL2_ttf-2.0.15
CATEGORIES=	devel
MASTER_SITES=	https://www.libsdl.org/projects/SDL_ttf/release/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.libsdl.org/projects/SDL_ttf/
COMMENT=	Use TrueType fonts in your SDL2 applications
LICENSE=	zlib

USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config
GNU_CONFIGURE=		yes

PKGCONFIG_OVERRIDE+=	SDL2_ttf.pc.in

.include "../../devel/SDL2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
