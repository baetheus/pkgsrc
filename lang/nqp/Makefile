# $NetBSD: Makefile,v 1.21 2020/01/26 17:31:30 rillig Exp $

DISTNAME=	nqp-2019.07.1
PKGREVISION=	1
CATEGORIES=	lang perl6
MASTER_SITES=	http://rakudo.org/downloads/nqp/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://rakudo.org/
COMMENT=	Not Quite Perl -- lightweight Perl 6-like environment for VM
LICENSE=	artistic-2.0

MAKE_JOBS_SAFE=	no

.include "../../mk/bsd.prefs.mk"

USE_LANGUAGES=		c c++
USE_TOOLS+=		perl gmake

HAS_CONFIGURE=		yes
CONFIG_SHELL=		${PERL5}
CONFIGURE_SCRIPT=	Configure.pl
CONFIGURE_ARGS=		--prefix=${PREFIX:Q} \
			--backends=moar

BUILDLINK_API_DEPENDS.MoarVM+=  MoarVM>=2017.07
.include "../../devel/MoarVM/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
