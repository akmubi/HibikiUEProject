#include "AkMPLComponent.h"

UAkMPLComponent::UAkMPLComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AuxBus = NULL;
    this->SendValue = 1.00f;
    this->MPS = NULL;
    this->bDebugDraw = false;
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->OcclusionRefreshInterval = 0.20f;
    this->ChangeRoomType = AkChangeRoomType::Once;
    this->Ak = NULL;
}


