#include "HbkEnemyWeaponShield.h"
#include "HbkMaterialBeatChangerComponent.h"

AHbkEnemyWeaponShield::AHbkEnemyWeaponShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MatChangeComp = CreateDefaultSubobject<UHbkMaterialBeatChangerComponent>(TEXT("MaterialBeatChanger"));
    this->pBlockSE = NULL;
    this->pBreakSE = NULL;
    this->pBreakVfx = NULL;
    this->pBreakAllVFX = NULL;
    this->pCrackSE = NULL;
}

void AHbkEnemyWeaponShield::Receive_OnDamageShiled(float CurrentDurableValue) {
}

void AHbkEnemyWeaponShield::OnCrackShiled() {
}


