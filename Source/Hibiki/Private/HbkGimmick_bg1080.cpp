#include "HbkGimmick_bg1080.h"

AHbkGimmick_bg1080::AHbkGimmick_bg1080(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->Type = EHbkGimmick_bg1080Type::Default;
    this->bTransferred = false;
    this->bBroken = false;
    this->ScreenTransitionTask = NULL;
}

void AHbkGimmick_bg1080::ScreenTransitionHalfDuration() {
}

void AHbkGimmick_bg1080::ScreenTransitionFinished() {
}

EHbkGimmick_bg1080AnimState AHbkGimmick_bg1080::GetAnimState() const {
    return EHbkGimmick_bg1080AnimState::None;
}


