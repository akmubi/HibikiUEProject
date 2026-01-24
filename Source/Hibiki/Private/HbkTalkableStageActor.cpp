#include "HbkTalkableStageActor.h"
#include "HbkDamageComponent.h"
#include "HbkTalkableComponent.h"

AHbkTalkableStageActor::AHbkTalkableStageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicsBodyPower = 0.00f;
    this->bLookAtPlayer = false;
    this->LookAtMinDegree = 0.00f;
    this->LookAtMaxDegree = 0.00f;
    this->DamageComponent = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("DamageComponent0"));
    this->TalkableComponent = CreateDefaultSubobject<UHbkTalkableComponent>(TEXT("TalkableComponent0"));
}

void AHbkTalkableStageActor::OnNoteWhole_RhythmEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkTalkableStageActor::OnEndTalkActor(AActor* Talker, const FName TalkResultOption, const FHbkTalkableInfo_t& TalkDataInfo) {
}

void AHbkTalkableStageActor::OnEndTalkAction(AActor* pActor, const FHbkTalkableInfo_t& l_TalkInfo) {
}

void AHbkTalkableStageActor::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkTalkableStageActor::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkTalkableStageActor::OnBeginTalkActor(AActor* Talker, const FHbkTalkableTalkData_t& l_TalkData) {
}

void AHbkTalkableStageActor::OnBeginTalkAction(AActor* pActor, const FHbkTalkableTalkData_t& l_TalkData) {
}

float AHbkTalkableStageActor::GetLookAtPlayerAngleZ() {
    return 0.0f;
}

bool AHbkTalkableStageActor::CanLookAt() {
    return false;
}






