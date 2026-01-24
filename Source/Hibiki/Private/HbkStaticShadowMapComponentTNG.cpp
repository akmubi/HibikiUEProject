#include "HbkStaticShadowMapComponentTNG.h"

UHbkStaticShadowMapComponentTNG::UHbkStaticShadowMapComponentTNG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->TextureTarget = NULL;
    this->OrthoWidth = 512;
    this->ShadowMapBias = 100.00f;
    this->bPerspectiveProjection = false;
    this->bAffectDeferredLighting = false;
    this->DrawPriority = 0;
}


