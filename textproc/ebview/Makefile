# $NetBSD: Makefile,v 1.38 2020/01/18 23:35:25 rillig Exp $

DISTNAME=		ebview-0.3.6
PKGREVISION=		29
CATEGORIES=		textproc
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=ebview/}

MAINTAINER=		yamajun@ofug.net
HOMEPAGE=		https://ebview.sourceforge.net/
COMMENT=		GTK2 based EPWING dictionary browser

USE_PKGLOCALEDIR=	YES
USE_TOOLS+=		gmake pkg-config msgfmt
GNU_CONFIGURE=		YES

LDFLAGS.DragonFly=	-lX11
LDFLAGS.SunOS+=		-lX11

.include "../../converters/libiconv/buildlink3.mk"
.include "../../devel/pangox-compat/buildlink3.mk"
.include "../../textproc/eb/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
