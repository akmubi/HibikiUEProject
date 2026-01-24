#include "HbkEm0570_ModeObject.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "HbkDamageComponent.h"
#include "HbkPartnerTargetPointComponent.h"

AHbkEm0570_ModeObject::AHbkEm0570_ModeObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("HitBoxComp"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->HbkDamage = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->AkComp = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->PartnerTargetComponent = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetComp"));
    this->ChanceTimeParticle = NULL;
    this->psChanceTimeParticle = NULL;
    this->bCheckDamageThrow = false;
    this->AkComp->SetupAttachment(RootComponent);
    this->PartnerTargetComponent->SetupAttachment(RootComponent);
}

bool AHbkEm0570_ModeObject::IsTryChanceTime() {
    return false;
}

AActor* AHbkEm0570_ModeObject::GetActivator() {
    return NULL;
}


