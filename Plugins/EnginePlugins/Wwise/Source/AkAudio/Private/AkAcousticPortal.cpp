#include "AkAcousticPortal.h"

AAkAcousticPortal::AAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->InitialState = AkAcousticPortalState::Open;
    this->ObstructionRefreshInterval = 0.00f;
    this->ObstructionCollisionChannel = ECC_GameTraceChannel2;
    this->TickInterval = 0.33f;
    this->CullingDistance = 2000.00f;
    this->bFindFrontRoomWhenBeginPlay = true;
    this->bFindBackRoomWhenBeginPlay = true;
    this->FrontRoomCmp = NULL;
    this->BackRoomCmp = NULL;
}

void AAkAcousticPortal::OpenPortal() {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal() {
}


