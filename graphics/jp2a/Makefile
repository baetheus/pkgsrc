# $NetBSD: Makefile,v 1.3 2020/01/18 21:49:36 jperkin Exp $

DISTNAME=	jp2a-1.0.7
PKGREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_GITHUB:=cslarsen/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	esg@sdf.lonestar.org
HOMEPAGE=	https://github.com/cslarsen/jp2a
COMMENT=	JPEG to ASCII converter
LICENSE=	gnu-gpl-v2

USE_TOOLS+=	automake autoconf autoreconf
GNU_CONFIGURE=	yes

pre-configure:
	cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} autoreconf -vi

.include "options.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
