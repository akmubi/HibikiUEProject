#include "HbkGesPpmChromaticAberrationDOF.h"

FHbkGesPpmChromaticAberrationDOF::FHbkGesPpmChromaticAberrationDOF() {
    this->bOverrideChromaticAberrationDOF = false;
    this->bChromaticAberrrationDOF = false;
    this->bUseNearDOF = false;
    this->bUseFarDOF = false;
    this->BlurDistNearDOF = 0.00f;
    this->BlurDistFarDOF = 0.00f;
    this->ChromaticAberrationDirU = 0.00f;
    this->ChromaticAberrationDirV = 0.00f;
    this->FocalPlane = 0.00f;
    this->NearPlaneDist = 0.00f;
    this->FarPlaneDist = 0.00f;
    this->bUseCinematicHalftoneMode = false;
    this->CinematicHalftoneBlendRatio = 0.00f;
    this->bColorNearDOF = false;
    this->bColorFarDOF = false;
    this->bColorFocalPlane = false;
    this->FocalPlaneColor = FLinearColor(FColor(0));
}

