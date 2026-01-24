#include "HbkTalkEventCamContext.h"

FHbkTalkEventCamContext::FHbkTalkEventCamContext() {
    this->KeyID = 0;
    this->InitialState = EHbkTalkEventKeyState::Exec;
    this->FieldOfView = 0.00f;
    this->CamDistance = 0.00f;
    this->LocalLocation = FVector(0.0f);
    this->LocalRotation = FRotator(0.0f);
}

