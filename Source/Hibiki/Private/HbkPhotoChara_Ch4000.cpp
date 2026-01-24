#include "HbkPhotoChara_Ch4000.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkFaceShadowComponent.h"

AHbkPhotoChara_Ch4000::AHbkPhotoChara_Ch4000(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh"));
    this->HbkFaceShadow = CreateDefaultSubobject<UHbkFaceShadowComponent>(TEXT("HbkFaceShadow"));
    this->HbkCostumeMeshComp->SetupAttachment(Mesh);
}


