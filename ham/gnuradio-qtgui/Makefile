# $NetBSD: Makefile,v 1.26 2020/01/18 21:49:40 jperkin Exp $

PKGNAME=	gnuradio-qtgui-${VERSION}
PKGREVISION=	4
COMMENT=	Qt GUI module of GNU Radio

.include	"../../ham/gnuradio-core/Makefile.common"
.include	"../../ham/gnuradio-core/Nocore.mk"

#CONF_FILES+=	${EGDIR}/gr-qtgui.conf	${PKG_SYSCONFDIR}/gr-qtgui.conf

CMAKE_ARGS+=	-DENABLE_DEFAULT=OFF
CMAKE_ARGS+=	-DENABLE_GR_QTGUI=ON

# This package is currently 3.7.13.5, released 2019-04-20.  It
# supports qt4 (and not qt5).
# 3.8.0.0 was released on 2019-08-09, and will likely be packaged
# soon.  It supports qt5 (and not qt4).

.include	"../../x11/qt4-libs/buildlink3.mk"
.include	"../../x11/qwt-qt4/buildlink3.mk"
.include	"../../x11/py-qt4/buildlink3.mk"

.include	"../../mk/bsd.pkg.mk"
