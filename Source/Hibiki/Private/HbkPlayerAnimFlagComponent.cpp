#include "HbkPlayerAnimFlagComponent.h"

UHbkPlayerAnimFlagComponent::UHbkPlayerAnimFlagComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AddFeetHeight = 20.00f;
    this->AddCheckLength = 25.00f;
    this->TraceSphereRadius = 10.00f;
    this->LegPosCheckTime = 0.62f;
}


