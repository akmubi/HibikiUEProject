#include "HbkAm0000_808.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkAm0000_808::AHbkAm0000_808(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh"));
    this->HbkCostumeMeshComp->SetupAttachment(GetMesh());
}

void AHbkAm0000_808::SetForcePermitGrappling(bool Flag) {
}

bool AHbkAm0000_808::GetForcePermitGrappling() const {
    return false;
}


