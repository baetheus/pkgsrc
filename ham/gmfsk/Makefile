# $NetBSD: Makefile,v 1.75 2020/01/18 21:49:40 jperkin Exp $
#

DISTNAME=	gmfsk-0.6
PKGREVISION=	58
CATEGORIES=	ham
MASTER_SITES=	http://gmfsk.connect.fi/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://gmfsk.connect.fi/
COMMENT=	Multimode HF terminal program

USE_LANGUAGES=	c c++
USE_TOOLS+=	gmake pkg-config
GNU_CONFIGURE=	yes
GCONF_SCHEMAS+=	gmfsk.schemas

CONFIGURE_ARGS+=	--enable-hamlib

.include "../../mk/bsd.prefs.mk"
LDFLAGS+=	${LIBOSSAUDIO}

.include "../../devel/GConf/schemas.mk"
.include "../../devel/libgnomeui/buildlink3.mk"
.include "../../math/fftw2/buildlink3.mk"
.include "../../ham/hamlib/buildlink3.mk"
.include "../../mk/omf-scrollkeeper.mk"
.include "../../mk/oss.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
