#include "HbkDisplayMaterialComponent.h"

UHbkDisplayMaterialComponent::UHbkDisplayMaterialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FaceDisplayMID = NULL;
    this->NoiseDisplayMID = NULL;
    this->EyeMID = NULL;
    this->DisplayMatPresetData = NULL;
    this->CurrentDisplayIndex = -1;
}

void UHbkDisplayMaterialComponent::ChangeDisplayMaterialParamByIndex(int32 Index) {
}


