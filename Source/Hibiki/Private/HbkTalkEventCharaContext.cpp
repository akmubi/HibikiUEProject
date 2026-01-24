#include "HbkTalkEventCharaContext.h"

FHbkTalkEventCharaContext::FHbkTalkEventCharaContext() {
    this->KeyID = 0;
    this->InitialState = EHbkTalkEventKeyState::Exec;
    this->SpawnClass = NULL;
    this->OffsetHeight = 0.00f;
    this->ActorScale = 0.00f;
    this->UpAxisRotAtLighting = 0.00f;
    this->RightAxisRotAtLighting = 0.00f;
    this->ParentKeyID = 0;
    this->TalkAnimKit = NULL;
    this->TalkFacialAnimKit = NULL;
    this->LocalLocation = FVector(0.0f);
    this->LocalRotation = FRotator(0.0f);
}

