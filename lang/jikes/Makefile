# $NetBSD: Makefile,v 1.39 2020/01/18 23:32:44 rillig Exp $
#

DISTNAME=	jikes-1.22
PKGREVISION=	3
CATEGORIES=	lang java
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=jikes/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://jikes.sourceforge.net/
COMMENT=	Java source to byte-code compiler

GNU_CONFIGURE=		yes
USE_LANGUAGES=		c c++
UNLIMIT_RESOURCES=	datasize

# enable "-source 1.5" -- not complete, but does not break normal compiles
CONFIGURE_ARGS+=	--enable-source15

USE_TOOLS+=	gmake	# uses multi-line comments with \ (naughty hack!)

.include "../../mk/bsd.pkg.mk"
