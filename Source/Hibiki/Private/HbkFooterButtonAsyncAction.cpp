#include "HbkFooterButtonAsyncAction.h"
#include "Templates/SubclassOf.h"

UHbkFooterButtonAsyncAction::UHbkFooterButtonAsyncAction() {
    this->ButtonWidget = NULL;
}

UHbkFooterButtonAsyncAction* UHbkFooterButtonAsyncAction::ShowFooterButton(UObject* WorldContextObject, TSubclassOf<UHbkFooterButtonWidget> WidgetClass, ETngKeyButtonMap KeyButton, FText ActionName, float InputTime) {
    return NULL;
}

void UHbkFooterButtonAsyncAction::OpenWidget() {
}

UHbkFooterButtonAsyncAction* UHbkFooterButtonAsyncAction::CloseFooterButton(UObject* WorldContextObject, TSubclassOf<UHbkFooterButtonWidget> WidgetClass) {
    return NULL;
}


