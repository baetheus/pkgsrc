# $NetBSD: Makefile,v 1.39 2020/01/18 23:32:55 rillig Exp $
#

DISTNAME=	yacas-1.2.2
PKGREVISION=	7
CATEGORIES=	math
MASTER_SITES=	http://yacas.sourceforge.net/backups/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://yacas.sourceforge.net/
COMMENT=	Yet Another Computer Algebra System
LICENSE=	gnu-gpl-v2

USE_LANGUAGES=	c c++
GNU_CONFIGURE=	YES
USE_TOOLS+=	gmake perl

TEST_TARGET=	test

LDFLAGS+=	${COMPILER_RPATH_FLAG}${PREFIX}/lib/yacas

SUBST_CLASSES+=		d2u
SUBST_STAGE.d2u=	pre-patch
SUBST_FILES.d2u=	src/cyacas.h src/cyacas.cpp plugins/pcre/pcre_config.h
SUBST_FILTER_CMD.d2u=	${TR} -d '\015'

REPLACE_PERL=	manmake/txt2yacasdoc.pl

.include "../../math/gsl/buildlink3.mk"
.include "../../x11/libXaw/buildlink3.mk"
.include "../../x11/libXi/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
