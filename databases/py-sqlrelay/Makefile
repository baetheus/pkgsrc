# $NetBSD: Makefile,v 1.22 2020/01/18 21:49:04 jperkin Exp $

PKGNAME=		${PYPKGPREFIX}-${DISTNAME}
PKGREVISION=		11
COMMENT=		Python extension for SQL Relay

.include "../../databases/sqlrelay/Makefile.common"

LICENSE=		modified-bsd

PYTHON_VERSIONS_ACCEPTED=	36 27 # 37 fails as of 1.0.0

.include "../../lang/python/pyversion.mk"

.if ${_PYTHON_VERSION} == 27
CONFIGURE_ARGS+=	--disable-python3
CONFIGURE_ARGS+=	--with-python-prefix=${PREFIX}
.else
CONFIGURE_ARGS+=	--disable-python
CONFIGURE_ARGS+=	--with-python3-prefix=${PREFIX}
.endif
CONFIGURE_ENV+=		PYVERSSUFFIX=${PYVERSSUFFIX}

BUILD_DIRS=		src/api/python

PY_PATCHPLIST=		yes

.include "../../databases/sqlrelay/buildlink3.mk"
.include "../../lang/python/extension.mk"
.include "../../mk/bsd.pkg.mk"
