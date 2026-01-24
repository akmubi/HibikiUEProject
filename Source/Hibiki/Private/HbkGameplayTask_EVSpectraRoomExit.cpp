#include "HbkGameplayTask_EVSpectraRoomExit.h"

UHbkGameplayTask_EVSpectraRoomExit::UHbkGameplayTask_EVSpectraRoomExit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Dialog = NULL;
    this->ScreenTransitionTask = NULL;
    this->SpectraRoomController = NULL;
    this->SettingsData = NULL;
}

void UHbkGameplayTask_EVSpectraRoomExit::ScreenTransitionHalfDuration() {
}

void UHbkGameplayTask_EVSpectraRoomExit::ScreenTransitionFinished() {
}

void UHbkGameplayTask_EVSpectraRoomExit::OnGotoHideOut() {
}

void UHbkGameplayTask_EVSpectraRoomExit::OnDecideReturnAddressMenu(int32 ButtonNo) {
}

void UHbkGameplayTask_EVSpectraRoomExit::OnCancelConfirmationHideOutMenu(int32 ButtonNo) {
}

void UHbkGameplayTask_EVSpectraRoomExit::OnAcceptConfirmationHideOutMenu(int32 ButtonNo) {
}

UHbkGameplayTask_EVSpectraRoomExit* UHbkGameplayTask_EVSpectraRoomExit::EventSpectraRoomExit(UObject* WorldContextObject) {
    return NULL;
}


