# $NetBSD: Makefile,v 1.27 2019/12/14 02:56:26 nia Exp $

DISTNAME=	fribidi-1.0.8
CATEGORIES=	converters
MASTER_SITES=	${MASTER_SITE_GITHUB:=fribidi/}
EXTRACT_SUFX=	.tar.bz2
GITHUB_PROJECT=	fribidi
GITHUB_RELEASE=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/fribidi/fribidi
COMMENT=	Free Implementation of the Unicode Bidirectional Algorithm
LICENSE=	gnu-gpl-v2

USE_LIBTOOL=	yes
GNU_CONFIGURE=	yes
USE_TOOLS+=	pkg-config gmake

TEST_TARGET=	check

REPLACE_INTERPRETER+=	bash
REPLACE.bash.old=	/bin/bash
REPLACE.bash.new=	${SH}
REPLACE_FILES.bash=	run.tests

PKGCONFIG_OVERRIDE=	fribidi.pc.in

.include "../../mk/bsd.pkg.mk"
