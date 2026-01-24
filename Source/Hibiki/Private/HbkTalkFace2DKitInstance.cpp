#include "HbkTalkFace2DKitInstance.h"

UHbkTalkFace2DKitInstance::UHbkTalkFace2DKitInstance() {
    this->MasterScale = 1.00f;
    this->XScale = 1.00f;
    this->AddPosX = 0.00f;
    this->AddPosY = 0.00f;
    this->AdjTextWinPos = 200.00f;
    this->FaceBase = NULL;
    this->EyeOpen = NULL;
    this->EyeHalfOpen = NULL;
    this->EyeClose = NULL;
    this->MouthClose = NULL;
    this->MouthHalfOpen = NULL;
    this->MouthOpen = NULL;
}

void UHbkTalkFace2DKitInstance::LoadStart(const UHbkTalkFace2DKit* Face2DKit) {
}

bool UHbkTalkFace2DKitInstance::IsLoading() const {
    return false;
}


