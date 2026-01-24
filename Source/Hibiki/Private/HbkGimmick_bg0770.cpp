#include "HbkGimmick_bg0770.h"

AHbkGimmick_bg0770::AHbkGimmick_bg0770(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->RestartCounter = 0;
    this->OverheatCounter = 0;
    this->PartnerIconState = -1;
}

void AHbkGimmick_bg0770::StopUpdateRestartPoint() {
}

void AHbkGimmick_bg0770::SetEndOverheatInfoTag(FName Tag) {
}

void AHbkGimmick_bg0770::SetEnabledDeactivateOnRestart(bool bEnabled) {
}

void AHbkGimmick_bg0770::OnPreResetPlayerPosition() {
}

void AHbkGimmick_bg0770::OnPartnerTargetSuccessAction() {
}

void AHbkGimmick_bg0770::OnPartnerTargetFailedAction() {
}

void AHbkGimmick_bg0770::OnPartnerTargetEndPartnerMiniGame() {
}

void AHbkGimmick_bg0770::OnPartnerTargetDecidedToTarget() {
}

void AHbkGimmick_bg0770::OnPartnerTargetBeginPartnerMiniGame() {
}

void AHbkGimmick_bg0770::OnOverheatTimerSe(int32 NoteCount, bool bDownBeat) {
}

bool AHbkGimmick_bg0770::IsAnimStateNormal() const {
    return false;
}

bool AHbkGimmick_bg0770::IsAnimStateMalfunction() const {
    return false;
}

bool AHbkGimmick_bg0770::IsAnimStateGame() const {
    return false;
}


