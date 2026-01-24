#include "HbkStoreHighlightWidget.h"

UHbkStoreHighlightWidget::UHbkStoreHighlightWidget() {
    this->HighlightMaterial = NULL;
    this->HighlightMaterialNameRange = TEXT("Range");
    this->HighlightMaterialNameFrame = TEXT("Frame");
    this->HighlightMaterialNameOutsideRangeColor = TEXT("OutsideRangeColor");
    this->HighlightMaterialNameFrameColor = TEXT("FrameColor");
    this->FrameLineThickness = 6.00f;
    this->RangeRenderTarget = NULL;
    this->FrameRenderTarget = NULL;
    this->HighlightMaterialInstance = NULL;
}


