# $NetBSD: Makefile,v 1.9 2020/01/26 17:31:38 rillig Exp $

DISTNAME=	cloog-0.18.4
CATEGORIES=	math
MASTER_SITES=	http://www.bastoul.net/cloog/pages/download/

MAINTAINER=	kuehro@gmx.de
HOMEPAGE=	https://www.cloog.org/
COMMENT=	Code generator for loop optimization (used by gcc)
LICENSE=	gnu-lgpl-v2.1

GNU_CONFIGURE=	yes
USE_LANGUAGES=	c
USE_LIBTOOL=	yes

TEST_TARGET=	check

CONFIGURE_ARGS+=	--with-isl=system
CONFIGURE_ARGS+=	--with-bits=gmp

BUILDLINK_API_DEPENDS.gmp+=	gmp>=6.0
.include "../../devel/gmp/buildlink3.mk"
.include "../../math/isl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
