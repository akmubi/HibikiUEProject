#include "HbkModelViewerBaseWidget.h"

UHbkModelViewerBaseWidget::UHbkModelViewerBaseWidget() {
    this->ModelViewerDT = NULL;
    this->OpenSound = NULL;
    this->CloseSound = NULL;
    this->BuySound = NULL;
    this->DecideSound = NULL;
    this->CancelSound = NULL;
    this->PreviewPageCursorSound = NULL;
    this->MVWallpaper_UI = NULL;
    this->MVModelDraw_UI = NULL;
    this->ModelViewerPreviewPage_UI = NULL;
    this->ModelViewerListPage_UI = NULL;
}


void UHbkModelViewerBaseWidget::OnSelectedMousePressed(UHbkModelViewerModelIconWidget* IconWidget) {
}

void UHbkModelViewerBaseWidget::OnSelectedHoldDownCompleted(UHbkModelViewerModelIconWidget* IconWidget) {
}

void UHbkModelViewerBaseWidget::OnModelDrawWidgetMoveEnd() {
}

void UHbkModelViewerBaseWidget::OnChangeSelect(int32 NewSelectNum) {
}


