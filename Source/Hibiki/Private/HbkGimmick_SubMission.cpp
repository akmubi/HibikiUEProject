#include "HbkGimmick_SubMission.h"

AHbkGimmick_SubMission::AHbkGimmick_SubMission(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SettingsData = NULL;
    this->Progress = 0;
    this->bActive = false;
    this->bGaveReward = false;
}


