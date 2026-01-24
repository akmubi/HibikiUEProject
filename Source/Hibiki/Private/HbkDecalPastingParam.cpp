#include "HbkDecalPastingParam.h"

FHbkDecalPastingParam::FHbkDecalPastingParam() {
    this->bIsEnable = false;
    this->DecalClass = NULL;
    this->DecalMaterial = NULL;
    this->bIsUseDecalSize = false;
    this->Opacity = 0.00f;
    this->LifeSpanNoteType = EHbkNote::None;
    this->LifeSpanNoteCount = 0.00f;
    this->DecalSize = FVector(0.0f);
    this->BaseColorTint = FLinearColor(FColor(0));
    this->LEDColor = FLinearColor(FColor(0));
    this->OffsetPosition = FVector(0.0f);
    this->OffsetRotation = FQuat(FRotator(0.0f));
}

