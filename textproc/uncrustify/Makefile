# $NetBSD: Makefile,v 1.7 2020/01/18 23:35:34 rillig Exp $

DISTNAME=	uncrustify-uncrustify-0.69.0
PKGNAME=	${DISTNAME:S/uncrustify-//}
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_GITHUB:=uncrustify/}
GITHUB_PROJECT=	uncrustify
GITHUB_TAG=	uncrustify-0.69.0

MAINTAINER=	ryoon@NetBSD.org
HOMEPAGE=	https://uncrustify.sourceforge.net/
COMMENT=	Source Code Beautifier for C-like languages
LICENSE=	gnu-gpl-v2

USE_CMAKE=	yes
USE_LANGUAGES=	c c++

OBJDIR=			${WRKSRC}/build
CONFIGURE_DIRS=		${OBJDIR}
CMAKE_ARG_PATH=		${WRKSRC}

PYTHON_VERSIONS_ACCEPTED=	27
PYTHON_FOR_BUILD_ONLY=		yes

pre-configure:
	${MKDIR} ${WRKSRC}/build

.include "../../lang/python/pyversion.mk"
.include "../../mk/bsd.pkg.mk"
