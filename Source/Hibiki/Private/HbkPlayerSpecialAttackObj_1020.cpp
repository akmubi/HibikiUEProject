#include "HbkPlayerSpecialAttackObj_1020.h"
#include "HbkSimpleSpringArmComponent.h"

AHbkPlayerSpecialAttackObj_1020::AHbkPlayerSpecialAttackObj_1020(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpringArmComp = CreateDefaultSubobject<UHbkSimpleSpringArmComponent>(TEXT("SpringArmComp"));
    this->PlayAnim = NULL;
    this->TurnSpeed = 180.00f;
    this->DurationNoteCount = 12;
    this->DestroyNoteCount = 3;
    this->ArmLength = -300.00f;
    this->SpringArmComp->SetupAttachment(RootComponent);
}

void AHbkPlayerSpecialAttackObj_1020::OnAbortSPA() {
}


