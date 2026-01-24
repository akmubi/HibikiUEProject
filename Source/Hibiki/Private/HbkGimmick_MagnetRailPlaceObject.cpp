#include "HbkGimmick_MagnetRailPlaceObject.h"

AHbkGimmick_MagnetRailPlaceObject::AHbkGimmick_MagnetRailPlaceObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->BPM = 120.00f;
    this->Note = EHbkNote::Note_Quarter;
    this->StartNoteCount = 0;
    this->PlaySEIntervalNote = 2;
    this->ItemPresetDT = NULL;
    this->GearSItemClass = NULL;
    this->GearItemClass = NULL;
    this->GearLItemClass = NULL;
    this->PlaceItemNote = EHbkNote::Note_Quarter;
    this->PlaceItemStartNoteCount = 0;
}

void AHbkGimmick_MagnetRailPlaceObject::OnEndMoveSpline() {
}

void AHbkGimmick_MagnetRailPlaceObject::OnBeginMoveSpline() {
}


