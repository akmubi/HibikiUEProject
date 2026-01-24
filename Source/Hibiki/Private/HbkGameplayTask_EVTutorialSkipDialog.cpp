#include "HbkGameplayTask_EVTutorialSkipDialog.h"

UHbkGameplayTask_EVTutorialSkipDialog::UHbkGameplayTask_EVTutorialSkipDialog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Dialog = NULL;
    this->StringTable = NULL;
}

void UHbkGameplayTask_EVTutorialSkipDialog::OnDecideConfirmMenu(int32 ButtonNo) {
}

void UHbkGameplayTask_EVTutorialSkipDialog::OnCancelConfirmMenu(int32 ButtonNo) {
}

UHbkGameplayTask_EVTutorialSkipDialog* UHbkGameplayTask_EVTutorialSkipDialog::EventTutorialSkipDialog(UObject* WorldContextObject, UStringTable* NewStringTable, const FString& MessageKey) {
    return NULL;
}


