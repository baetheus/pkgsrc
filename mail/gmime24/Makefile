# $NetBSD: Makefile,v 1.25 2020/01/18 23:32:47 rillig Exp $

DISTNAME=	gmime-2.4.33
PKGNAME=	${DISTNAME:S/gmime/gmime24/}
CATEGORIES=	mail
MASTER_SITES=	${MASTER_SITE_GNOME:=sources/gmime/2.4/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://spruce.sourceforge.net/gmime/
COMMENT=	Library for the creation and parsing of MIME messages (API v2.4)
LICENSE=	gnu-lgpl-v2.1

CONFLICTS=	gmime<2.2.25nb2

USE_PKGLOCALEDIR=	yes
USE_LIBTOOL=		yes
USE_TOOLS+=		gmake pkg-config
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--enable-gtk-doc=no
CONFIGURE_ARGS+=	--disable-mono
PKGCONFIG_OVERRIDE+=	gmime-2.4.pc.in
TEST_TARGET=		check

.include "../../devel/glib2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
