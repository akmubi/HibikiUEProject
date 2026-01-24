#include "HbkAnimNotify_SetCharacterCollisionResponse.h"

UHbkAnimNotify_SetCharacterCollisionResponse::UHbkAnimNotify_SetCharacterCollisionResponse() {
    this->CollisionChannel = ECC_WorldStatic;
    this->NewResponse = ECR_Ignore;
    this->bIsReset = false;
    this->bIsResetToAllChannel = false;
    this->bApplyToCapsule = true;
    this->bApplyToMesh = true;
}


