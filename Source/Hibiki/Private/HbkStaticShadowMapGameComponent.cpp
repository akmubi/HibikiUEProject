#include "HbkStaticShadowMapGameComponent.h"

UHbkStaticShadowMapGameComponent::UHbkStaticShadowMapGameComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceFadeStart = 6000.00f;
    this->DistanceFadeFadeDistance = 3000.00f;
    this->FinalDarknessMult = 1.00f;
    this->bUseLinesEdgeFade = false;
    this->EdgeFadeXAxisPlus = 0.00f;
    this->EdgeFadeXAxisMinus = 0.00f;
    this->EdgeFadeYAxisPlus = 0.00f;
    this->EdgeFadeYAxisMinus = 0.00f;
    this->EdgeFadeZAxisPlus = 0.00f;
    this->EdgeFadeZAxisMinus = 0.00f;
    this->RenderTargetWidth = 1400.00f;
    this->bIsBakeVolumeSRTValid = false;
    this->bIsSceneCaptureShadowViewMatrixValid = false;
}


