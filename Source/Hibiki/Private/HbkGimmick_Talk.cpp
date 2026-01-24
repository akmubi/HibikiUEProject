#include "HbkGimmick_Talk.h"

AHbkGimmick_Talk::AHbkGimmick_Talk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkGimmick_Talk::TalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkGimmick_Talk::CreateVfxSyncEvent(int32 BeatCount, bool bOnBeat) {
}


