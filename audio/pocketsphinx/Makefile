# $NetBSD: Makefile,v 1.4 2020/01/18 23:30:04 rillig Exp $

DISTNAME=	pocketsphinx-0.8
PKGREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=cmusphinx/}

MAINTAINER=	fhajny@NetBSD.org
HOMEPAGE=	https://cmusphinx.sourceforge.net/
COMMENT=	CMUSphinx speech recognition C library
LICENSE=	2-clause-bsd

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config

PKGCONFIG_OVERRIDE+=	pocketsphinx.pc.in

CONFIGURE_ARGS+=	--without-python

.include "../../audio/sphinxbase/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
