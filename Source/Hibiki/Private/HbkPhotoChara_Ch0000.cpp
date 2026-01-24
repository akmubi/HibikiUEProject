#include "HbkPhotoChara_Ch0000.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkFaceShadowComponent.h"
#include "HbkPoseableMeshComponent.h"

AHbkPhotoChara_Ch0000::AHbkPhotoChara_Ch0000(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeMeshCompHead = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh_Head"));
    this->HbkCostumeMeshCompTops = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh_Tops"));
    this->HbkCostumeMeshCompInner = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh_Inner"));
    this->HbkCostumeMeshCompBottoms = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh_Bottoms"));
    this->HbkCostumeMeshCompShoes = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh_Shoes"));
    this->HbkCostumeMeshCompMuffler = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh_Muffler"));
    this->HbkCostumeMeshCompRoboArm = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh_RoboArm"));
    this->HbkCostumeMeshCompAccessory = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh_Accessory"));
    this->SkeletonMesh = CreateDefaultSubobject<UHbkPoseableMeshComponent>(TEXT("HbkSkeletonMesh"));
    this->HbkFaceShadow = CreateDefaultSubobject<UHbkFaceShadowComponent>(TEXT("HbkFaceShadow"));
    this->HbkCostumeMeshCompHead->SetupAttachment(Mesh);
    this->HbkCostumeMeshCompTops->SetupAttachment(Mesh);
    this->HbkCostumeMeshCompInner->SetupAttachment(Mesh);
    this->HbkCostumeMeshCompBottoms->SetupAttachment(Mesh);
    this->HbkCostumeMeshCompShoes->SetupAttachment(Mesh);
    this->HbkCostumeMeshCompMuffler->SetupAttachment(Mesh);
    this->HbkCostumeMeshCompRoboArm->SetupAttachment(Mesh);
    this->HbkCostumeMeshCompAccessory->SetupAttachment(Mesh);
    this->SkeletonMesh->SetupAttachment(Mesh);
}


