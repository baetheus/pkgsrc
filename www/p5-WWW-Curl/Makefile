# $NetBSD: Makefile,v 1.55 2020/01/18 21:51:10 jperkin Exp $

DISTNAME=	WWW-Curl-4.17
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	20
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=WWW/}

MAINTAINER=	imil@gcu.info
HOMEPAGE=	https://metacpan.org/release/WWW-Curl
COMMENT=	Perl binding interface for curl
LICENSE=	mit

BUILDLINK_API_DEPENDS.curl+=	curl>=7.10.8
CFLAGS+=			-Wall -Werror -Wreturn-type

MAKE_ENV+=		PERL_USE_UNSAFE_INC=1
PERL5_PACKLIST=		auto/WWW/Curl/.packlist
PERL5_MODULE_TYPE=	Module::Install::Bundled

TEST_DEPENDS+=	p5-Test-CPAN-Meta-[0-9]*:../../devel/p5-Test-CPAN-Meta

.include "../../www/curl/buildlink3.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
