#include "HbkGameplayTask_EVDizzy.h"
#include "Templates/SubclassOf.h"

UHbkGameplayTask_EVDizzy::UHbkGameplayTask_EVDizzy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pDizzySE = NULL;
    this->CameraShake = NULL;
}

void UHbkGameplayTask_EVDizzy::NoteEventWhole_EVDizzy(int32 l_NoteCount, bool bDownBeat) {
}

UHbkGameplayTask_EVDizzy* UHbkGameplayTask_EVDizzy::CreateDizzyEventTask(UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> CameraShakeClass, float CameraScale, UAkAudioEvent* DizzySE) {
    return NULL;
}


