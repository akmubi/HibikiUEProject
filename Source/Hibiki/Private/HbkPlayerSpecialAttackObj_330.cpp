#include "HbkPlayerSpecialAttackObj_330.h"
#include "GameFramework/SpringArmComponent.h"

AHbkPlayerSpecialAttackObj_330::AHbkPlayerSpecialAttackObj_330(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    this->PlayAnim = NULL;
    this->MeshKitDamageName = TEXT("MK_wp0050_damage");
    this->MeshKitBreakName = TEXT("MK_wp0050_break");
    this->MeshKitBaseName = TEXT("MK_wp0050_base");
    this->AttachSocketNameWhenDetach = TEXT("Origin");
    this->ImpulsePower = 10000.00f;
    this->WaitHideNoteCount = 4;
    this->HidingNoteCount = 4;
    this->DamageSE_Def = NULL;
    this->DamageSE_Crack = NULL;
    this->DamageSE_Broken = NULL;
    this->ArmLength = -150.00f;
    this->SpringArmComp->SetupAttachment(RootComponent);
}

void AHbkPlayerSpecialAttackObj_330::Receive_StartSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkPlayerSpecialAttackObj_330::Receive_EndSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkPlayerSpecialAttackObj_330::OnEndPassiveEffect(EHbkPlayerPassiveEffectType PassiveEffectType) {
}

void AHbkPlayerSpecialAttackObj_330::OnDecrementPassiveEffect(EHbkPlayerPassiveEffectType PassiveEffectType, float CurrentAmount) {
}


