# $NetBSD: buildlink3.mk,v 1.3 2020/01/18 21:48:19 jperkin Exp $

BUILDLINK_TREE+=	libtorrent-rasterbar

.if !defined(LIBTORRENT_RASTERBAR_BUILDLINK3_MK)
LIBTORRENT_RASTERBAR_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libtorrent-rasterbar+=	libtorrent-rasterbar>=1.2.2
BUILDLINK_ABI_DEPENDS.libtorrent-rasterbar?=	libtorrent-rasterbar>=1.2.3nb3
BUILDLINK_PKGSRCDIR.libtorrent-rasterbar?=	../../net/libtorrent-rasterbar

.include "../../devel/boost-libs/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.endif	# LIBTORRENT_RASTERBAR_BUILDLINK3_MK

BUILDLINK_TREE+=	-libtorrent-rasterbar
