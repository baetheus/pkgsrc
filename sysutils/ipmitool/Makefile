# $NetBSD: Makefile,v 1.23 2020/01/18 23:35:18 rillig Exp $
#

DISTNAME=		ipmitool-1.8.18
PKGREVISION=		3
CATEGORIES=		sysutils
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=ipmitool/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://ipmitool.sourceforge.net/
COMMENT=		Command-line utility for managing IPMI devices

GNU_CONFIGURE=		yes
INSTALLATION_DIRS+=	share/examples/ipmitool share/doc/ipmitool

CONFIGURE_ARGS.NetBSD+=		--disable-intf-imb
CONFIGURE_ARGS.DragonFly+=	--disable-intf-open --disable-intf-imb
CONFIGURE_ARGS.SunOS+=		--enable-solaris-opt

CFLAGS.NetBSD+=		-D_NETBSD_SOURCE

# ipmitool uses rl_event_hook
.include "../../devel/readline/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
