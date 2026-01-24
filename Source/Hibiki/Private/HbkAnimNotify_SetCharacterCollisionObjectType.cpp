#include "HbkAnimNotify_SetCharacterCollisionObjectType.h"

UHbkAnimNotify_SetCharacterCollisionObjectType::UHbkAnimNotify_SetCharacterCollisionObjectType() {
    this->ObjectType = ECC_WorldStatic;
    this->bIsReset = false;
    this->bApplyToCapsule = true;
    this->bApplyToMesh = true;
}


