#include "HbkEm6000_CoinSplash.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkImproveAttackComponent.h"

AHbkEm6000_CoinSplash::AHbkEm6000_CoinSplash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->ImproveAttackComponent = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("ImproveAttack"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AttackCollisionDivideNum = 6;
    this->ParticleSystemComponentForCoin = NULL;
    this->ImproveAttackComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm6000_CoinSplash::ReceivePlayerDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


