#include "HbkEm0740_Blaze.h"
#include "AkComponent.h"
#include "HbkImproveAttackComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm0740_Blaze::AHbkEm0740_Blaze(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BurningAttackComp = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("HbkImproveAttackBurning"));
    this->AkCompForSwitch = CreateDefaultSubobject<UAkComponent>(TEXT("AkCompForSwitch"));
    this->AkEvent_FlameOn = NULL;
    this->AkEvent_FlameOff = NULL;
    this->FireWaveContinueMax = 3;
    this->DisabledBurningCount_OnAttackRepelled = 2.00f;
    this->BurningAttackComp->SetupAttachment(RootComponent);
    this->AkCompForSwitch->SetupAttachment(GetMesh());
}

void AHbkEm0740_Blaze::OnToughDeactive() {
}

void AHbkEm0740_Blaze::OnToughActive() {
}

void AHbkEm0740_Blaze::OnPlayerStartAttackState() {
}

void AHbkEm0740_Blaze::OnBeginRhythmParryAttack() {
}

bool AHbkEm0740_Blaze::IsEnabledFireWave() const {
    return false;
}

void AHbkEm0740_Blaze::CounterAttackPlayedCheck() {
}


