# $NetBSD: buildlink3.mk,v 1.31 2019/07/16 22:45:42 nia Exp $

BUILDLINK_TREE+=	devIL

.if !defined(DEVIL_BUILDLINK3_MK)
DEVIL_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.devIL+=	devIL>=1.7.8
BUILDLINK_ABI_DEPENDS.devIL+=	devIL>=1.7.8nb13
BUILDLINK_PKGSRCDIR.devIL?=	../../devel/devIL

.include "../../mk/pkg-build-options.mk"
.include "../../devel/SDL/buildlink3.mk"
.include "../../graphics/glu/buildlink3.mk"
.if !empty(PKG_BUILD_OPTIONS.opencv:Mjasper)
.  include "../../graphics/jasper/buildlink3.mk"
.endif
.include "../../mk/jpeg.buildlink3.mk"
.include "../../graphics/giflib/buildlink3.mk"
.include "../../graphics/mng/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../graphics/tiff/buildlink3.mk"
.include "../../x11/libXpm/buildlink3.mk"
.endif # DEVIL_BUILDLINK3_MK

BUILDLINK_TREE+=	-devIL
