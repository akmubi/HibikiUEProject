#include "HbkGimmick_BreakCardboardBox.h"
#include "Components/SceneComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkGimmick_BreakCardboardBox::AHbkGimmick_BreakCardboardBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->DelayTimeOfHit = 0.00f;
    this->BreakPower = 100.00f;
    this->DamagePower = 100.00f;
    this->OverlapImpulseRate = 100.00f;
    this->RandomMeshValue = -1;
    this->BoneMaxNum = 0;
    this->SK_BreakMesh = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeletalMesh"));
    this->SK_BreakMesh->SetupAttachment(RootComponent);
}

void AHbkGimmick_BreakCardboardBox::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_BreakCardboardBox::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_BreakCardboardBox::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AHbkGimmick_BreakCardboardBox::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


