#include "HbkAdditionalContentsParam.h"

UHbkAdditionalContentsParam::UHbkAdditionalContentsParam() {
    this->Deathtouch_PickRate = 1.00f;
    this->Deathtouch_MaxPickCount = 5;
    this->BurnDamageMultiple = 1.00f;
    this->BeamDamageMultiple = 1.00f;
    this->HologramCharaPostDeactivateGroup = EHbkHologramCharaPostActivateGroup::HologramCharaPostActivateGroup13;
    this->HologramCharaPostDeactivateGroupRowName = TEXT("Em0810Ghost_Disappear");
    this->DrainHologram_Normal = NULL;
    this->DrainHologram_Airbot = NULL;
    this->pAkBR_CamoutAppear = NULL;
}


