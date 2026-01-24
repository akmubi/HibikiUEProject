#include "HbkGimmick_bg0980.h"

AHbkGimmick_bg0980::AHbkGimmick_bg0980(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->DefaultMonitor = NULL;
    this->BreakMonitor = NULL;
    this->bDone = false;
}

void AHbkGimmick_bg0980::TickStop(int32 NoteCount, bool bOnBeat) {
}

void AHbkGimmick_bg0980::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

float AHbkGimmick_bg0980::GetAnimPlayRate() {
    return 0.0f;
}


