# $NetBSD: Makefile,v 1.13 2019/12/17 10:11:28 leot Exp $

DISTNAME=	ruamel.yaml-0.16.5
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/./-/1}
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_PYPI:=r/ruamel.yaml/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://bitbucket.org/ruamel/yaml
COMMENT=	YAML parser/emitter
LICENSE=	mit

USE_LANGUAGES=	# none

.include "../../lang/python/pyversion.mk"
.if ${_PYTHON_VERSION} == 27
DEPENDS+=	${PYPKGPREFIX}-ruamel-ordereddict>=0.4.9:../../devel/py-ruamel-ordereddict
.endif

DEPENDS+=	${PYPKGPREFIX}-ruamel-yaml-clib>=0.1.2:../../devel/py-ruamel-yaml-clib

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
