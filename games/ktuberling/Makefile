# $NetBSD: Makefile,v 1.33 2020/02/02 02:44:52 markd Exp $

DISTNAME=	ktuberling-${KAPPSVER}
CATEGORIES=	games

HOMEPAGE=	https://kde.org/applications/games/ktuberling/
COMMENT=	Kids game: make your own potato
LICENSE=	gnu-gpl-v2 AND gnu-fdl-v1.2

.include "../../meta-pkgs/kde/applications.mk"

BUILD_DEPENDS+=	kdoctools>=5.19.0:../../devel/kdoctools

USE_TOOLS+=	msgmerge perl

.include "../../games/libkdegames/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
