#include "HbkEm0810_Hound.h"
#include "HbkEnemyComboAttackComponent.h"

AHbkEm0810_Hound::AHbkEm0810_Hound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyComboAttack = CreateDefaultSubobject<UHbkEnemyComboAttackComponent>(TEXT("HbkEnemyComboAttack"));
    this->AtkMissedDamage = NULL;
    this->HoundGhostClass = NULL;
    this->AttackSlotBlendWeightList.AddDefaulted(3);
    this->ArmBladeClass = NULL;
    this->ArmBladeRepopTime = 1.00f;
}

void AHbkEm0810_Hound::WarpLocation(FVector Location) {
}

bool AHbkEm0810_Hound::IsEnableRepopArmblade() {
    return false;
}

bool AHbkEm0810_Hound::IsArmBladeLaunchEnable() {
    return false;
}

bool AHbkEm0810_Hound::IsArmBladeLaunched() {
    return false;
}

TArray<float> AHbkEm0810_Hound::GetAttackSlotBlendWeightList() {
    return TArray<float>();
}


