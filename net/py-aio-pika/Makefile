# $NetBSD: Makefile,v 1.1 2020/02/13 18:40:04 adam Exp $

DISTNAME=	aio-pika-6.4.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	net python
MASTER_SITES=	${MASTER_SITE_PYPI:=a/aio-pika/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://aio-pika.readthedocs.org/
COMMENT=	Wrapper for the aiormq for asyncio and humans
LICENSE=	apache-2.0

DEPENDS+=	${PYPKGPREFIX}-aiormq>=3.2.0:../../net/py-aiormq
DEPENDS+=	${PYPKGPREFIX}-yarl-[0-9]*:../../www/py-yarl

USE_LANGUAGES=	# none

PYTHON_VERSIONS_INCOMPATIBLE=	27

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
