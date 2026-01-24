#include "HbkPlayerControllerBase.h"
#include "MediaSoundComponent.h"
#include "HbkCheatManager.h"

AHbkPlayerControllerBase::AHbkPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UHbkCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->MediaSound = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("MediaSound"));
    this->PartnerRequestActionName = TEXT("PartnerRequest");
    this->RightTriggerName = TEXT("Gamepad_RightTrigger");
    this->LeftTriggerName = TEXT("Gamepad_LeftTrigger");
}

bool AHbkPlayerControllerBase::CallInputKey(FKey Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool Gamepad) {
    return false;
}


