# $NetBSD: Makefile,v 1.65 2020/01/18 23:33:24 rillig Exp $

DISTNAME=	slrn-1.0.3a
PKGREVISION=	1
CATEGORIES=	news
MASTER_SITES=	http://jedsoft.org/releases/slrn/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://slrn.sourceforge.net/
COMMENT=	Highly customizable threaded newsreader
LICENSE=	gnu-gpl-v2

EXTRACT_USING=	bsdtar
MAKE_JOBS_SAFE=	no

WRKSRC=		${WRKDIR}/slrn-1.0.3

USE_PKGLOCALEDIR=	yes
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--disable-inews --with-slrnpull --enable-spool \
			--enable-grouplens --with-libdir=${PREFIX}/lib/slrn \
			--enable-mid-cache \
			--with-slang=${BUILDLINK_PREFIX.libslang2} \
			--with-localedir=${PREFIX}/${PKGLOCALEDIR}/locale

.include "options.mk"

LDFLAGS.SunOS+=	-lsocket -lnsl

BUILDLINK_API_DEPENDS.libslang2+=	libslang2>=2.2.3
.include "../../devel/libslang2/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
