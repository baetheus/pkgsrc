# $NetBSD: Makefile,v 1.167 2020/02/12 16:38:06 ryoon Exp $
#

FIREFOX_VER=	73.0
PKGNAME=	firefox-l10n-${FIREFOX_VER:S/esr//}
DISTNAME=	# empty
CATEGORIES=	www
#MASTER_SITES=	${MASTER_SITE_MOZILLA_ALL:=firefox/releases/${FIREFOX_VER}/linux-i686/xpi/}
MASTER_SITES=	${MASTER_SITE_MOZILLA:=firefox/releases/${FIREFOX_VER}/linux-i686/xpi/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.mozilla.com/en-US/firefox/
COMMENT=	Language packs for www/firefox
LICENSE=	mpl-2.0 AND mpl-1.1 AND gnu-lgpl-v3 # as of 70.0.1

DIST_SUBDIR=	${PKGNAME_NOREV}
DISTFILES=	${FIREFOX_LOCALES:=.xpi}

NO_BUILD=	yes

INSTALLATION_DIRS=	lib/firefox/browser/extensions

FIREFOX_LOCALES= \
	ach af an ar ast az be bg bn br bs ca cak cs cy da de dsb	\
	el en-CA en-GB en-US eo es-AR es-CL es-ES es-MX et eu		\
	fa ff fi fr fy-NL ga-IE gd gl gn gu-IN				\
	he hi-IN hr hsb hu hy-AM ia id is it ja ka kab kk km kn	ko	\
	lij lt lv mk mr ms my nb-NO ne-NP nl nn-NO oc			\
	pa-IN pl pt-BR pt-PT rm ro ru si sk sl son sq sr sv-SE		\
	ta te th tr uk uz vi xh zh-CN zh-TW

EXTENSIONS_DIR=		${PREFIX}/lib/firefox/browser/extensions

do-install:
.for locale in ${FIREFOX_LOCALES}
	${INSTALL_DATA} ${WRKSRC}/${locale}.xpi \
	${DESTDIR}${EXTENSIONS_DIR}/langpack-${locale}@firefox.mozilla.org.xpi
.endfor

.if make(list-licenses)
.include "list-licenses.mk"
.endif

.include "../../mk/bsd.pkg.mk"
