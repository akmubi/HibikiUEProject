#include "HbkSelectCheckPointsWidget.h"

UHbkSelectCheckPointsWidget::UHbkSelectCheckPointsWidget() {
    this->PrevDataTableIndex = -1;
    this->PrevCheckPointIndex = -1;
    this->Asset = NULL;
    this->bIsHidden = true;
    this->DataTableIndex = 0;
    this->CheckPointIndex = 0;
    this->SelectingType = ESCPType::DataTable;
    this->SelectingDT_FileName = TEXT("None");
}

void UHbkSelectCheckPointsWidget::RepeatUp() {
}

void UHbkSelectCheckPointsWidget::RepeatDown() {
}

void UHbkSelectCheckPointsWidget::PressRestartSound() {
}

void UHbkSelectCheckPointsWidget::PressDecide() {
}

void UHbkSelectCheckPointsWidget::PressCancel() {
}













