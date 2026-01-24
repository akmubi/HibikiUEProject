#include "HbkPhotoChara_Ch3000.h"
#include "HbkCostumeMeshComponent.h"

AHbkPhotoChara_Ch3000::AHbkPhotoChara_Ch3000(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh"));
    this->HbkCostumeMeshComp->SetupAttachment(Mesh);
}


