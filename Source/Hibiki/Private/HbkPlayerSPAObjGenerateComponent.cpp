#include "HbkPlayerSPAObjGenerateComponent.h"

UHbkPlayerSPAObjGenerateComponent::UHbkPlayerSPAObjGenerateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenerateObjectData = NULL;
}

void UHbkPlayerSPAObjGenerateComponent::UnregisterSpAtkObject() {
}

void UHbkPlayerSPAObjGenerateComponent::InitSpAtkObjGenerate() {
}

bool UHbkPlayerSPAObjGenerateComponent::GenerateObject(FGameplayTag SpAtkTag, float PlayerPlayRate) {
    return false;
}


