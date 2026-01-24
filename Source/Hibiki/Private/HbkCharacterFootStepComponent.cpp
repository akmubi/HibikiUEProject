#include "HbkCharacterFootStepComponent.h"

UHbkCharacterFootStepComponent::UHbkCharacterFootStepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicalMaterialInfoName = TEXT("Player");
    this->TraceChannel = TraceTypeQuery1;
    this->DefaultPhysicalMaterial = NULL;
    this->ExtendFallingCountMax = 2;
    this->LineTraceLength_Default = 50.00f;
    this->LineTraceLength_Aerial = 80.00f;
    this->LineTraceLength_Falling = 140.00f;
}


