# $NetBSD: Makefile,v 1.19 2020/01/18 23:35:12 rillig Exp $

DISTNAME=		steghide-0.5.1
PKGREVISION=		7
CATEGORIES=		security
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=steghide/}

MAINTAINER=		agc@NetBSD.org
HOMEPAGE=		https://steghide.sourceforge.net/
COMMENT=		Hides data (steganography) in audio or graphics files

GNU_CONFIGURE=		yes
USE_LANGUAGES=		c c++03
USE_TOOLS+=		msgfmt
USE_LIBTOOL=		yes
USE_PKGLOCALEDIR=	yes

.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../security/libmcrypt/buildlink3.mk"
.include "../../security/mhash/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
