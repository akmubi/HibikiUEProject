#include "HbkStaticShadowMapCaptureComponent2D.h"

UHbkStaticShadowMapCaptureComponent2D::UHbkStaticShadowMapCaptureComponent2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectionType = ECameraProjectionMode::Orthographic;
    this->bAttachToStaticShadowMapVolume = true;
    this->bCaptureEveryFrameCustom = false;
    this->ProjectionTypeCustom = ECameraProjectionMode::Orthographic;
    this->OrthoWidthCustom = 2000.00f;
    this->FOVAngleCustom = 90.00f;
    this->ShadowMapBias = 20.00f;
    this->bUseOnlyStaticShadowCastingMeshes = true;
    this->bUseSkeletalMeshes = false;
    this->bUsePoseableMeshes = false;
    this->bAffectDeferredLighting = false;
    this->RenderTargetWidth = 1400;
}


