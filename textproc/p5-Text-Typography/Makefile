# $NetBSD: Makefile,v 1.12 2019/08/11 13:23:48 wiz Exp $
#

DISTNAME=		Text-Typography-0.01
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		9
CATEGORIES=		textproc perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Text/}

MAINTAINER=		schmonz@NetBSD.org
HOMEPAGE=		https://metacpan.org/release/Text-Typography
COMMENT=		Markup ASCII text with correct typography for HTML
LICENSE=		${PERL5_LICENSE}

PERL5_PACKLIST=		auto/Text/Typography/.packlist

pre-configure:
	find ${WRKSRC} -type f -name '*.orig' -print | xargs rm -f

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
