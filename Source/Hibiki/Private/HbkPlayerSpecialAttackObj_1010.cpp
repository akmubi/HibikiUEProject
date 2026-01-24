#include "HbkPlayerSpecialAttackObj_1010.h"
#include "HbkImproveAttackComponent.h"
#include "HbkRepulsionComponent.h"

AHbkPlayerSpecialAttackObj_1010::AHbkPlayerSpecialAttackObj_1010(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackComp = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("AttackComp"));
    this->RepulsionComp = CreateDefaultSubobject<UHbkRepulsionComponent>(TEXT("RepulsionComp"));
    this->PlayAnim = NULL;
    this->JumpCountMax = 8;
    this->RotateCurveName = TEXT("rotate");
    this->AttackComp->SetupAttachment(RootComponent);
}

void AHbkPlayerSpecialAttackObj_1010::OnAbortSPA() {
}


