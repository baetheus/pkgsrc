# $NetBSD: Makefile,v 1.6 2019/12/06 19:18:33 markd Exp $

DISTNAME=	doclicense
PKGNAME=	tex-${DISTNAME}-1.10.0
TEXLIVE_REV=	51332

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://ctan.org/pkg/doclicense
COMMENT=	Support for putting documents under a license
LICENSE=	lppl-1.3c

DEPENDS+=	tex-enumitem-[0-9]*:../../print/tex-enumitem
DEPENDS+=	tex-etoolbox-[0-9]*:../../devel/tex-etoolbox
DEPENDS+=	tex-xifthen-[0-9]*:../../devel/tex-xifthen
DEPENDS+=	tex-oberdiek-[0-9]*:../../print/tex-oberdiek

TEXLIVE_UNVERSIONED=	yes
.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"
