#include "HbkAnimNotify_PlayAnimEquip.h"

UHbkAnimNotify_PlayAnimEquip::UHbkAnimNotify_PlayAnimEquip() {
    this->WeaponAnim = NULL;
    this->SlotName = TEXT("DefaultSlot");
    this->BlendIn = 0.25f;
    this->BlendOut = 0.25f;
    this->bIsSyncBPM = true;
}


