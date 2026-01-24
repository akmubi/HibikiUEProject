#include "HbkAnimNotifyState_PlayEquipAnimWithStop.h"

UHbkAnimNotifyState_PlayEquipAnimWithStop::UHbkAnimNotifyState_PlayEquipAnimWithStop() {
    this->WeaponAnim = NULL;
    this->SlotName = TEXT("DefaultSlot");
    this->BlendInOnPlay = 0.25f;
    this->BlendOutOnPlay = 0.25f;
    this->BlendOutOnStop = 0.10f;
    this->bIsSyncBPM = true;
}


