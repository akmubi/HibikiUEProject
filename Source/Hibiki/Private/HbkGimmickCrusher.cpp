#include "HbkGimmickCrusher.h"

AHbkGimmickCrusher::AHbkGimmickCrusher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->Type = EHbkGimmickCrusherType::Once;
    this->SplineConveyor = NULL;
    this->StartState = EHbkGimmickCrusherState::Up;
    this->FinishState = EHbkGimmickCrusherState::Down;
    this->ActivateCount = 1;
    this->bUsePeripheralsInterlockParam = true;
    this->bUpDonwCountSettings = true;
    this->DownDelayCount = 0;
    this->DownCount = 4;
    this->DownStayCount = 0;
    this->UpDelayCount = 0;
    this->UpCount = 4;
    this->UpStayCount = 0;
    this->bAttack = true;
    this->bLuggage = false;
    this->LayoutLength = 0.00f;
    this->LayoutPoint = 1;
    this->LayoutOffsetLength = 0.00f;
    this->bSaved = false;
    this->bActive = false;
}

void AHbkGimmickCrusher::RequestTransitionStateUp(int32 NoteCount, int32 InterlockCounter) {
}

void AHbkGimmickCrusher::RequestTransitionStateDown(int32 NoteCount) {
}

void AHbkGimmickCrusher::Layout() {
}

bool AHbkGimmickCrusher::IsInEditor() const {
    return false;
}

bool AHbkGimmickCrusher::IsDown() const {
    return false;
}

float AHbkGimmickCrusher::GetUpPlayRate() {
    return 0.0f;
}

EHbkGimmickCrusherType AHbkGimmickCrusher::GetType() const {
    return EHbkGimmickCrusherType::Once;
}

float AHbkGimmickCrusher::GetDownPlayRate() {
    return 0.0f;
}

float AHbkGimmickCrusher::GetBasePlayRate() {
    return 0.0f;
}


