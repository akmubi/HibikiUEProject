#include "HbkExponentialHeightFog.h"
#include "Components/ExponentialHeightFogComponent.h"

AHbkExponentialHeightFog::AHbkExponentialHeightFog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->ComponentNotUsed = (UExponentialHeightFogComponent*)RootComponent;
}


