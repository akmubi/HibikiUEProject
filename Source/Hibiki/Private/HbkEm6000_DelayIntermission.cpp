#include "HbkEm6000_DelayIntermission.h"
#include "Templates/SubclassOf.h"

UHbkEm6000_DelayIntermission::UHbkEm6000_DelayIntermission() {
    this->TaskClass = NULL;
    this->bIsStartCheckPoint = false;
}

void UHbkEm6000_DelayIntermission::OnIntermissionTransition(const UObject* OwnerObject, const AActor* SelfObject) {
}

void UHbkEm6000_DelayIntermission::OnIntermissionCompleted(const UObject* OwnerObject, const AActor* SelfObject) {
}

UHbkEm6000_DelayIntermission* UHbkEm6000_DelayIntermission::DelayIntermission(UObject* WorldContextObject, AHbkEm6000_StageController* NewStageController, TSubclassOf<AHbkEm6000_IntermissionTaskBase> NewTaskClass, bool NewBIsStartCheckPoint) {
    return NULL;
}


