#include "HbkArcadeMenuController.h"

UHbkArcadeMenuController::UHbkArcadeMenuController() {
    this->ArcadeMenuWidgetClass = NULL;
    this->OpenMenuState = NULL;
    this->CloseMenuState = NULL;
    this->ArcadeMenuWidget = NULL;
}

void UHbkArcadeMenuController::OnEndedWidget(UHbkArcadeMenuParentWidget* Sender) {
}

void UHbkArcadeMenuController::End() {
}

void UHbkArcadeMenuController::Cancel() {
}


