# $NetBSD: Makefile,v 1.86 2020/01/18 23:33:14 rillig Exp $

DISTNAME=		ettercap-0.6.b
PKGREVISION=		40
CATEGORIES=		security net
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=ettercap/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://ettercap.sourceforge.net/
COMMENT=		Multipurpose sniffer/interceptor/logger for switched LAN
LICENSE=		gnu-gpl-v2

CONFLICTS+=		ettercap-NG-[0-9]*

MAKE_JOBS_SAFE=		no

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--enable-plugins
CONFIGURE_ARGS+=	--enable-https

.include "options.mk"

# needs putwin()
INCOMPAT_CURSES=	NetBSD-[0-4].*
PTHREAD_OPTS+=		require
PTHREAD_AUTO_VARS=	yes
MAKE_ENV+=		MACHINE_ARCH=${MACHINE_ARCH:Q}

BUILD_DIRS=		. plugins
INSTALL_DIRS=		. plugins

.include "../../devel/ncurses/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
