# $NetBSD: Makefile,v 1.22 2020/01/18 23:32:03 rillig Exp $

DISTNAME=	lpairs-1.0.4
PKGREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=lgames/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://lgames.sourceforge.net/
COMMENT=	Memory game matching pairs of cards

USE_PKGLOCALEDIR=	yes
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--without-included-gettext
LDFLAGS+=		${BUILDLINK_LDADD.gettext}

.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/SDL/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
