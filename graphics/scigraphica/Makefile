# $NetBSD: Makefile,v 1.91 2020/01/18 23:32:19 rillig Exp $

DISTNAME=	scigraphica-2.1.0
PKGREVISION=	35
CATEGORIES=	graphics math
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=scigraphica/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://scigraphica.sourceforge.net/
COMMENT=	Data analysis and technical graphics

USE_LIBTOOL=		yes
USE_TOOLS+=		gmake intltool pkg-config
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--without-gnome
CONFIGURE_ARGS+=	--with-readline-include-path=${BUILDLINK_PREFIX.readline}/include
CONFIGURE_ARGS+=	--with-readline-path=${BUILDLINK_PREFIX.readline}/lib
CONFIGURE_ARGS+=	--with-termcap-include-path=${BUILDLINK_PREFIX.readline}/include
CONFIGURE_ARGS+=	--with-termcap-path=${BUILDLINK_PREFIX.readline}/lib
CONFIGURE_ENV+=		PYTHONBIN=${PYTHONBIN:Q}

PTHREAD_AUTO_VARS=	yes

PYTHON_VERSIONS_ACCEPTED=	27 # py-numarray via libscigraphica

pre-configure:
	${LN} -s ${PYTHONBIN} ${TOOLS_DIR}/bin/python

.include "../../devel/readline/buildlink3.mk"
.include "../../graphics/libscigraphica/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
