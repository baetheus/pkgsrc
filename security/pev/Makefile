# $NetBSD: Makefile,v 1.7 2020/01/18 23:35:11 rillig Exp $
#

DISTNAME=	pev-0.80
PKGREVISION=	1
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=pev/}

WRKSRC=		${WRKDIR}/pev

MAINTAINER=	khorben@defora.org
HOMEPAGE=	https://pev.sourceforge.net/
COMMENT=	The PE analysis toolkit

LICENSE=	gnu-gpl-v3

USE_TOOLS+=	gmake

.include "../../mk/bsd.prefs.mk"

MAKE_FLAGS+=	DESTDIR=${DESTDIR}
MAKE_FLAGS+=	prefix=${PREFIX}
MAKE_FLAGS+=	mandir=${PREFIX}/${PKGMANDIR}
AUTO_MKDIRS=	yes

.include "../../security/openssl/buildlink3.mk"
.include "../../devel/pcre/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
