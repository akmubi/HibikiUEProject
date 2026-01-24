#include "HbkToonMotionBlurAfterImageData.h"

FHbkToonMotionBlurAfterImageData::FHbkToonMotionBlurAfterImageData() {
    this->FrameInterval = 0;
    this->UV_DiffScale = 0.00f;
    this->AfterImageNum = 0;
    this->ColorIntensity = 0.00f;
    this->MultiplyColor1 = FLinearColor(FColor(0));
    this->MultiplyColor2 = FLinearColor(FColor(0));
    this->MultiplyColor3 = FLinearColor(FColor(0));
    this->MultiplyColor4 = FLinearColor(FColor(0));
    this->MultiplyColor5 = FLinearColor(FColor(0));
    this->MultiplyColor6 = FLinearColor(FColor(0));
    this->MultiplyColor7 = FLinearColor(FColor(0));
}

