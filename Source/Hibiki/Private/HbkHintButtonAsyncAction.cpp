#include "HbkHintButtonAsyncAction.h"
#include "Templates/SubclassOf.h"

UHbkHintButtonAsyncAction::UHbkHintButtonAsyncAction() {
    this->HintButtonWidget = NULL;
}

UHbkHintButtonAsyncAction* UHbkHintButtonAsyncAction::ShowHintButton(UObject* WorldContextObject, TSubclassOf<UHbkHintButtonWidget> WidgetClass) {
    return NULL;
}

void UHbkHintButtonAsyncAction::OpenHint() {
}

UHbkHintButtonAsyncAction* UHbkHintButtonAsyncAction::CloseHintButton(UObject* WorldContextObject, TSubclassOf<UHbkHintButtonWidget> WidgetClass) {
    return NULL;
}


