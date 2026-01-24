#include "HbkPurchaseController.h"

UHbkPurchaseController::UHbkPurchaseController() {
    this->ProductDataTable = NULL;
    this->ProductCostumeDataTable = NULL;
    this->StoreWidget = NULL;
    this->CostumeStoreWidget = NULL;
}

void UHbkPurchaseController::Receive_OnStoreClosed() {
}

void UHbkPurchaseController::Receive_OnCostumeClosed() {
}


