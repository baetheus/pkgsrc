# $NetBSD: Makefile,v 1.33 2020/02/02 03:00:22 markd Exp $

DISTNAME=	dragon-${KAPPSVER}
CATEGORIES=	multimedia

HOMEPAGE=	https://kde.org/applications/multimedia/dragon/
COMMENT=	Simple video player for KDE
LICENSE=	gnu-gpl-v2

.include "../../meta-pkgs/kde/applications.mk"

BUILD_DEPENDS+=	kdoctools>=5.19.0:../../devel/kdoctools

USE_TOOLS+=	msgmerge

SUBST_CLASSES+=		xdg
SUBST_STAGE.xdg=	pre-configure
SUBST_MESSAGE.xdg=	Install via examples dir.
SUBST_FILES.xdg=	misc/CMakeLists.txt
SUBST_SED.xdg=		-e 's:{CONFIG_INSTALL_DIR}:{KDE_INSTALL_XDG_EX_DIR}:'

MAKE_DIRS+=	${PKG_SYSCONFDIR}/xdg
CONF_FILES+=	${PREFIX}/share/examples/kde-xdg/dragonplayerrc \
		${PKG_SYSCONFDIR}/xdg/dragonplayerrc

.include "../../devel/kparts/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
