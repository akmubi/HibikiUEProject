#include "HbkCh3000_CNMN.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkCh3000_CNMN::AHbkCh3000_CNMN(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh"));
    this->HbkCostumeMeshComp->SetupAttachment(GetMesh());
}


