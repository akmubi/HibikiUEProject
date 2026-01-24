#include "HbkLight.h"
#include "HbkGameAgentComponent.h"

AHbkLight::AHbkLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}


