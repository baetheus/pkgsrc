# $NetBSD: Makefile,v 1.26 2020/01/18 23:33:18 rillig Exp $
#

DISTNAME=	lopster-1.2.2
PKGREVISION=	4
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=lopster/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://lopster.sourceforge.net/
COMMENT=	Yet another Gtk+ Napster clone

USE_TOOLS+=	gmake
GNU_CONFIGURE=	yes

post-extract:
	${RM} -fr ${WRKSRC}/intl

.include "../../devel/zlib/buildlink3.mk"
.include "../../x11/gtk/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
