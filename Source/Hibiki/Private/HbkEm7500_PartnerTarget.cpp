#include "HbkEm7500_PartnerTarget.h"
#include "Components/SceneComponent.h"
#include "HbkDamageComponent.h"
#include "HbkPartnerAppearPointComponent.h"
#include "HbkPartnerTargetPointComponent.h"

AHbkEm7500_PartnerTarget::AHbkEm7500_PartnerTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PartnerTargetPointComponent = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint"));
    this->PartnerAppearPointComponent = CreateDefaultSubobject<UHbkPartnerAppearPointComponent>(TEXT("PartnerAppearPoint"));
    this->DamageComponent = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("DamageComp"));
    this->PartnerTargetPointComponent->SetupAttachment(RootComponent);
    this->PartnerAppearPointComponent->SetupAttachment(RootComponent);
}


