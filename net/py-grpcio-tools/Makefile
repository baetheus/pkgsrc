# $NetBSD: Makefile,v 1.12 2020/02/10 15:36:32 adam Exp $

DISTNAME=	grpcio-tools-1.27.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	net python
MASTER_SITES=	${MASTER_SITE_PYPI:=g/grpcio-tools/}

MAINTAINER=	minskim@NetBSD.org
HOMEPAGE=	https://grpc.io/
COMMENT=	Protobuf code generator for gRPC
LICENSE=	apache-2.0

PYTHON_VERSIONS_INCOMPATIBLE=	27

DEPENDS+=	${PYPKGPREFIX}-grpcio>=1.24.3:../../net/py-grpcio
DEPENDS+=	${PYPKGPREFIX}-protobuf>=3.5.1:../../devel/py-protobuf

USE_LANGUAGES=	c c++11

MAKE_ENV+=	GRPC_PYTHON_LDFLAGS="-lprotoc ${COMPILER_RPATH_FLAG}${BUILDLINK_PREFIX.protobuf}/lib"

.include "../../devel/protobuf/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
