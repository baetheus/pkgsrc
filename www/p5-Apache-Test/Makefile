# $NetBSD: Makefile,v 1.30 2019/08/11 13:24:24 wiz Exp $

DISTNAME=		Apache-Test-1.40
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		2
CATEGORIES=		www perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Apache/}

MAINTAINER=		adam@migus.org
HOMEPAGE=		https://metacpan.org/release/Apache-Test
COMMENT=		Wrapper for Test.pm to test an Apache server
LICENSE=		apache-2.0

CONFLICTS+=		ap2-perl-[0-9]*

USE_LANGUAGES=		# none
PERL5_PACKLIST=		auto/Apache/Test/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
