# $NetBSD: Makefile,v 1.104 2020/01/18 23:32:13 rillig Exp $

DISTNAME=	gqview-2.0.4
PKGREVISION=	30
CATEGORIES=	graphics x11
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=gqview/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://gqview.sourceforge.net/
COMMENT=	GTK2-based graphic file viewer

USE_TOOLS+=		msgfmt pkg-config
GNU_CONFIGURE=		yes
USE_PKGLOCALEDIR=	yes
LIBS+=			-lm
LIBS.SunOS+=		-lsocket

MAKE_ENV+=		builddir=.

.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/gtk2/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
