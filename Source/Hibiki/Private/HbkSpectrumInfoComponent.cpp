#include "HbkSpectrumInfoComponent.h"

UHbkSpectrumInfoComponent::UHbkSpectrumInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpeanaType = EHbkSpeanaType::Speana_OneThird;
    this->materialSlotName = TEXT("M_BattleAreaBarrier");
    this->bNotUseMPCMode = false;
    this->NumRepeatU = 1.00f;
    this->LineNum = 0;
    this->ColumnNum = 0;
    this->SpectrumScale = 1.00f;
}

void UHbkSpectrumInfoComponent::UpdateSpectrumMaterialWithNotUseMPC(float DeltaTime) {
}

void UHbkSpectrumInfoComponent::UnregisterInRSS() {
}

void UHbkSpectrumInfoComponent::RegisterInRSS() {
}

float UHbkSpectrumInfoComponent::GetSpectrumInfo(int32 Index) const {
    return 0.0f;
}

float UHbkSpectrumInfoComponent::GetIntegralSpectrumInfo(int32 Index) const {
    return 0.0f;
}

float UHbkSpectrumInfoComponent::GetBeatSpectrumInfo(int32 Index) const {
    return 0.0f;
}


