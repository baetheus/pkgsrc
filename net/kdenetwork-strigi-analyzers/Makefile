# $NetBSD: Makefile,v 1.27 2020/01/18 21:50:16 jperkin Exp $

DISTNAME=	kdenetwork-strigi-analyzers-16.04.0
PKGREVISION=	11
CATEGORIES=	net
COMMENT=	Strigi analyzers for various network protocols
MASTER_SITES=	${MASTER_SITE_KDE:=applications/16.04.0/src/}

.include "../../meta-pkgs/kde4/Makefile.kde4"

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../devel/boost-headers/buildlink3.mk"
.include "../../x11/kdelibs4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
