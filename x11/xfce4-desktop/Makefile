# $NetBSD: Makefile,v 1.83 2020/01/29 05:00:58 gutteridge Exp $

.include "../../meta-pkgs/xfce4/Makefile.common"

VERSION=	4.14.2
DISTNAME=	xfdesktop-${VERSION}
PKGNAME=	xfce4-desktop-${VERSION}
CATEGORIES=	x11
MASTER_SITES+=	https://archive.xfce.org/src/xfce/xfdesktop/${VERSION:R}/

HOMEPAGE=	https://docs.xfce.org/xfce/xfdesktop/start
COMMENT=	Xfce desktop background manager

CONFIGURE_ARGS+=	--sysconfdir=${PKG_SYSCONFBASE}

USE_LANGUAGES=	c99

.include "../../devel/libglade/buildlink3.mk"
.include "../../devel/libwnck3/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../sysutils/libnotify/buildlink3.mk"
.include "../../sysutils/xfce4-thunar/buildlink3.mk"
.include "../../x11/xfce4-garcon/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
