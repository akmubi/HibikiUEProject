#include "HbkCh1000_Peppermint.h"
#include "HbkPlayerShootingComponent.h"

AHbkCh1000_Peppermint::AHbkCh1000_Peppermint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkPlayerShooting = CreateDefaultSubobject<UHbkPlayerShootingComponent>(TEXT("HbkPlayerShooting"));
}


