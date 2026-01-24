#include "HbkGimmick_SpectraHubRoomExitDoor.h"

AHbkGimmick_SpectraHubRoomExitDoor::AHbkGimmick_SpectraHubRoomExitDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SettingsData = NULL;
    this->Dialog = NULL;
}

void AHbkGimmick_SpectraHubRoomExitDoor::OnGotoHideOut() {
}

void AHbkGimmick_SpectraHubRoomExitDoor::OnCancelReturnToHideOutMenu(int32 ButtonNo) {
}

void AHbkGimmick_SpectraHubRoomExitDoor::OnAcceptReturnToHideOutMenu(int32 ButtonNo) {
}


