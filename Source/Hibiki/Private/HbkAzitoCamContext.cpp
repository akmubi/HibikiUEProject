#include "HbkAzitoCamContext.h"

FHbkAzitoCamContext::FHbkAzitoCamContext() {
    this->FieldOfView = 0.00f;
    this->FollowInterpSpeed = 0.00f;
    this->LocalLocation = FVector(0.0f);
    this->LocalRotation = FRotator(0.0f);
}

