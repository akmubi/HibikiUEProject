#include "HbkEm0570_Deathmetal.h"

AHbkEm0570_Deathmetal::AHbkEm0570_Deathmetal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserDamageType = NULL;
    this->pBreakVfx = NULL;
    this->pBreakAllVFX = NULL;
    this->pNormalLaserVfx = NULL;
    this->pNormalLaserHitVfx = NULL;
    this->pRPLaserVfx = NULL;
    this->pRPLaserHitVfx = NULL;
    this->pDrainMoveCurveAsset = NULL;
    this->BodyTypeDefaultMaterial = NULL;
    this->BodyTypePeppermintMaterial = NULL;
    this->BodyTypeKorsicaMaterial = NULL;
    this->BodyTypeMacaronMaterial = NULL;
    this->pOnChangeTypeDef_VFX = NULL;
    this->pOnChangeTypePep_VFX = NULL;
    this->pOnChangeTypeKor_VFX = NULL;
    this->pOnChangeTypeMac_VFX = NULL;
    this->MacModeObjectAttachNameLeft = TEXT("l_hand__shield");
    this->MacModeObjectAttachNameRight = TEXT("r_hand__shield");
    this->PepModeObjectAttachName = TEXT("l_hand__barrier");
    this->KorModeObjectAttachName = TEXT("r_hand_beam");
    this->ModeObject_Macaron = NULL;
    this->ModeObject_Peppermint = NULL;
    this->ModeObject_Korsica = NULL;
    this->pModeObject_MacaronLeft = NULL;
    this->pModeObject_MacaronRight = NULL;
    this->pModeObject_Peppermint = NULL;
    this->pModeObject_Korsica = NULL;
}

void AHbkEm0570_Deathmetal::Receive_OnToughActivated() {
}

void AHbkEm0570_Deathmetal::Receive_OnTakeDamageShield(float CurrentDuration) {
}

void AHbkEm0570_Deathmetal::Receive_OnChangedHealthTypeObject(float Value, float PreValue, float ValueRate) {
}

bool AHbkEm0570_Deathmetal::IsEnableSummonFriends() {
    return false;
}

bool AHbkEm0570_Deathmetal::GetSummonFirendsList(TArray<AHbkEnemyCharacter*>& SummonEnemyList) {
    return false;
}

EHbkEm0570MeshkitType AHbkEm0570_Deathmetal::GetCurrentCounterType() {
    return EHbkEm0570MeshkitType::Default;
}

TArray<float> AHbkEm0570_Deathmetal::GetBlendAlphaList() {
    return TArray<float>();
}


