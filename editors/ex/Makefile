# $NetBSD: Makefile,v 1.15 2020/01/18 23:30:45 rillig Exp $
#

DISTNAME=	ex-040103
PKGNAME=	ex-20040103
PKGREVISION=	4
CATEGORIES=	editors
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=ex-vi/files/ex-vi/040103/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://ex-vi.sourceforge.net/
COMMENT=	Berkeley vi 3.7
LICENSE=	original-bsd

SUBST_CLASSES+=		getline
SUBST_STAGE.getline=	post-extract
SUBST_MESSAGE.getline=	Changing 'getline' to 'get_line'
SUBST_FILES.getline=	ex*.c ex_proto.h
SUBST_SED.getline=	-e "s,getline,get_line,g"

MAKE_DIRS_PERMS+=	${VARBASE}/tmp/vi.recover ${REAL_ROOT_USER} ${REAL_ROOT_GROUP} 1777

.include "../../mk/termcap.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"

MAKE_ENV+=	TERMLIB=${BUILDLINK_LIBNAME.termcap}
