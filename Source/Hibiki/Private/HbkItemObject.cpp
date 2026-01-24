#include "HbkItemObject.h"

UHbkItemObject::UHbkItemObject() {
    this->SpawnClass = NULL;
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->UseItemSound = NULL;
    this->OffsetHeight = 0.00f;
    this->PopupDirection = 0.00f;
    this->PopupPowerRangeMin = 350.00f;
    this->PopupPowerRangeMax = 600.00f;
    this->PopupPhysMoveTimeLimit = 3.00f;
    this->bDisableAutoMoving = false;
    this->bIsMaterials = false;
    this->bIsMeshLoc = false;
    this->bIsMeshRot = false;
    this->bIsMeshScale = false;
    this->bIsOffsetHeight = false;
    this->bIsPopupScale = false;
    this->bIsPopupDirection = false;
    this->bIsPopupPowerRange = false;
    this->bIsPhysMoveTimeLimit = false;
    this->bIsDisableAutoMoving = false;
}

void UHbkItemObject::Invoke_UseItem(AActor* User) {
}

bool UHbkItemObject::Invoke_ShouldUseItem(AActor* User) {
    return false;
}


