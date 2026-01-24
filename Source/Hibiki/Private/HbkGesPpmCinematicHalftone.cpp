#include "HbkGesPpmCinematicHalftone.h"

FHbkGesPpmCinematicHalftone::FHbkGesPpmCinematicHalftone() {
    this->bOverrideCinematicHalftone = false;
    this->bEnableCinematicHalftone = false;
    this->Frequency = 0.00f;
    this->Intensity = 0.00f;
    this->Opacity = 0.00f;
    this->BlendMode = 0.00f;
    this->RadiusMax = 0.00f;
    this->RadiusMin = 0.00f;
    this->BrightnessCoefficient = 0.00f;
    this->bEnableCharacterMask = false;
    this->bEnableWorldSpace = false;
    this->WorldSpaceBlendPower = 0.00f;
    this->bEnableDepthMode = false;
    this->ClipFadeMode = 0.00f;
    this->ClipPos = 0.00f;
    this->ClipDist = 0.00f;
    this->FarClipDepthCoefficient = 0.00f;
    this->FarClipFadeCoefficient = 0.00f;
    this->NearClipDepthCoefficient = 0.00f;
    this->NearClipFadeCoefficient = 0.00f;
    this->RadiusFar = 0.00f;
    this->RadiusFarFar = 0.00f;
    this->RadiusNear = 0.00f;
    this->BackgroundColor = FLinearColor(FColor(0));
    this->HalftoneColor = FLinearColor(FColor(0));
}

