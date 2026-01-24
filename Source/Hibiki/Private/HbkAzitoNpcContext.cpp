#include "HbkAzitoNpcContext.h"

FHbkAzitoNpcContext::FHbkAzitoNpcContext() {
    this->NpcType = EHbkAzitoNpcType::None;
    this->NpcScale = 0.00f;
    this->AnimKit = NULL;
    this->InitialSyncAnim = NULL;
    this->LocalLocation = FVector(0.0f);
    this->LocalRotation = FRotator(0.0f);
}

