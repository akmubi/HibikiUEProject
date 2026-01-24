#include "HbkPhotoChara_Am0000.h"
#include "HbkCostumeMeshComponent.h"

AHbkPhotoChara_Am0000::AHbkPhotoChara_Am0000(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh"));
    this->CatModeActorClass = NULL;
    this->HbkCostumeMeshComp->SetupAttachment(Mesh);
}


