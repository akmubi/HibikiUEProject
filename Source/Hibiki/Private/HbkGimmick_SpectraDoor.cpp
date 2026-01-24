#include "HbkGimmick_SpectraDoor.h"

AHbkGimmick_SpectraDoor::AHbkGimmick_SpectraDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SettingsData = NULL;
    this->bInteract = false;
    this->ScreenTransitionTask = NULL;
    this->SpectraRoomController = NULL;
}

void AHbkGimmick_SpectraDoor::ScreenTransitionHalfDuration() {
}

void AHbkGimmick_SpectraDoor::ScreenTransitionFinished() {
}

void AHbkGimmick_SpectraDoor::OnTalkEnded(const FHbkTalkContext TalkContext) {
}


void AHbkGimmick_SpectraDoor::OnJoinedPartner() {
}

FHbkGimmick_SpectraDoorAnimState AHbkGimmick_SpectraDoor::GetAnimState() const {
    return FHbkGimmick_SpectraDoorAnimState::Close;
}


