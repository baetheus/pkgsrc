# $NetBSD: Makefile,v 1.11 2019/11/30 17:23:08 sjmulder Exp $

DISTNAME=	ncdu-1.14.1
CATEGORIES=	filesystems
MASTER_SITES=	https://dev.yorhel.nl/download/

COMMENT=	Disk usage visualization tool
MAINTAINER=	slitvinov@gmail.com
HOMEPAGE=	https://dev.yorhel.nl/ncdu
LICENSE=	modified-bsd

GNU_CONFIGURE=	yes
FAKE_NCURSES=	yes
USE_CURSES=	vw_printw

.include "../../mk/curses.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
