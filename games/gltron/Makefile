# $NetBSD: Makefile,v 1.36 2020/01/18 23:32:01 rillig Exp $
#

DISTNAME=	gltron-0.70-source
PKGNAME=	${DISTNAME:S/-source$//}
PKGREVISION=	15
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=gltron/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://gltron.sourceforge.net/
COMMENT=	3D lightcycle game inspired by the movie Tron

WRKSRC=			${WRKDIR}/${PKGNAME_NOREV}
USE_LANGUAGES=		c c++
GNU_CONFIGURE=		YES
CONFIGURE_ARGS+=	--disable-warn

LIBS.SunOS+=	-lm

.include "../../audio/SDL_sound/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
