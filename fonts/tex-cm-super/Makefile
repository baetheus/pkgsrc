# $NetBSD: Makefile,v 1.4 2019/12/06 19:29:45 markd Exp $

DISTNAME=	cm-super
PKGNAME=	tex-${DISTNAME}-0.3.4
PKGREVISION=	1
TEXLIVE_REV=	15878

MAINTAINER=	minskim@NetBSD.org
COMMENT=	CM-Super family of fonts
LICENSE=	gnu-gpl-v2

TEX_MIXEDMAP_FILES+=	cm-super-t1.map
TEX_MIXEDMAP_FILES+=	cm-super-t2a.map
TEX_MIXEDMAP_FILES+=	cm-super-t2b.map
TEX_MIXEDMAP_FILES+=	cm-super-t2c.map
TEX_MIXEDMAP_FILES+=	cm-super-ts1.map
TEX_MIXEDMAP_FILES+=	cm-super-x2.map

TEXLIVE_UNVERSIONED=	yes
.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"
