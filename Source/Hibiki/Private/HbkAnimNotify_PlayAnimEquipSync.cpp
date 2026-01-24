#include "HbkAnimNotify_PlayAnimEquipSync.h"

UHbkAnimNotify_PlayAnimEquipSync::UHbkAnimNotify_PlayAnimEquipSync() {
    this->WeaponAnim = NULL;
    this->EquipAnimSlotName = TEXT("DefaultSlot");
    this->OwnerAnimSlotName = TEXT("Attack");
    this->BlendIn = 0.25f;
    this->BlendOut = 0.25f;
    this->bIsSyncBPM = true;
}


