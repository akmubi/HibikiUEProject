#include "HbkGimmick_ARProjector.h"

AHbkGimmick_ARProjector::AHbkGimmick_ARProjector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkGimmick_ARProjector::StartMacaronMiniGame() {
}

void AHbkGimmick_ARProjector::SetActivateInteract(const bool bActivate) {
}

void AHbkGimmick_ARProjector::PlayBurstSE() {
}

void AHbkGimmick_ARProjector::OnReturnImpatience(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_ARProjector::OnPartnerTargetPointLockon() {
}

void AHbkGimmick_ARProjector::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}



FVector2D AHbkGimmick_ARProjector::GetEyeAngle(float DeltaTime, float InterpSpeed) {
    return FVector2D{};
}

EAHbkGimmick_ARProjectorAnimState AHbkGimmick_ARProjector::GetAnimState() const {
    return EAHbkGimmick_ARProjectorAnimState::None;
}


