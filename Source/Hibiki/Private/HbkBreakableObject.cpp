#include "HbkBreakableObject.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkDamageComponent.h"

AHbkBreakableObject::AHbkBreakableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->RootScene = (USceneComponent*)RootComponent;
    this->DamageComponent = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->AkComp = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComp->SetupAttachment(RootComponent);
}

void AHbkBreakableObject::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


