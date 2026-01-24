#include "HbkEm7500_AppealComponent.h"

UHbkEm7500_AppealComponent::UHbkEm7500_AppealComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkEm7500_AppealComponent::SetAppealInfo(const TMap<FGameplayTag, FHbkEm7500AppealInfo>& InAppealInfo) {
}

bool UHbkEm7500_AppealComponent::FindActionTag(const FGameplayTag& SelectTag, FGameplayTag& OutActionTag) {
    return false;
}

void UHbkEm7500_AppealComponent::ClearRecordApeal() {
}


