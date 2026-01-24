#include "HbkFireEnemyCharacter.h"
#include "HbkEnemyBurningComponent.h"

AHbkFireEnemyCharacter::AHbkFireEnemyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkEmBurningComp = CreateDefaultSubobject<UHbkEnemyBurningComponent>(TEXT("BurningComp"));
}

void AHbkFireEnemyCharacter::OnEnabledBurning() {
}

void AHbkFireEnemyCharacter::OnDisabledBurning() {
}



