#include "HbkGimmick_SpectraDoorTeleport.h"

FHbkGimmick_SpectraDoorTeleport::FHbkGimmick_SpectraDoorTeleport() {
    this->CameraApproachingCount = 0;
    this->CameraKeepCount = 0;
    this->ScreenTransitionNoteCount = 0;
    this->CameraComp = NULL;
    this->ReturnPointComp = NULL;
    this->CameraApproachingLocalLocation = FVector(0.0f);
    this->SrcCameraRelativeLocation = FVector(0.0f);
    this->DstCameraRelativeLocation = FVector(0.0f);
}

