#include "HbkGameplayTask_GraffitiAppreciation.h"
#include "Templates/SubclassOf.h"

UHbkGameplayTask_GraffitiAppreciation::UHbkGameplayTask_GraffitiAppreciation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BackButtonWidgetClass = NULL;
    this->BackButtonWidget = NULL;
}

void UHbkGameplayTask_GraffitiAppreciation::OnInputCancel() {
}

UHbkGameplayTask_GraffitiAppreciation* UHbkGameplayTask_GraffitiAppreciation::GraffitiAppreciation(UObject* WorldContextObject, TSubclassOf<UTngUserWidget> NewBackButtonWidgetClass) {
    return NULL;
}


