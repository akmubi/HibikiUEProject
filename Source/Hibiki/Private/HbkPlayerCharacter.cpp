#include "HbkPlayerCharacter.h"
#include "HbkPlayerAnimFlagComponent.h"
#include "HbkPlayerCostumeMeshComponent.h"
#include "HbkRhythmAssistPointComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkPlayerCharacter::AHbkPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_HbkAnimFlagComp = GetClass()->FindPropertyByName("HbkAnimFlagComp");
    (*p_HbkAnimFlagComp->ContainerPtrToValuePtr<UHbkPlayerAnimFlagComponent*>(this)) = CreateDefaultSubobject<UHbkPlayerAnimFlagComponent>(TEXT("HbkAnimFlagComp"));
    this->AssistOffset = CreateDefaultSubobject<UHbkRhythmAssistPointComponent>(TEXT("AssistOffset"));
    this->HbkCostumeMeshCompHead = CreateDefaultSubobject<UHbkPlayerCostumeMeshComponent>(TEXT("CostumeMesh_Head"));
    this->HbkCostumeMeshCompTops = CreateDefaultSubobject<UHbkPlayerCostumeMeshComponent>(TEXT("CostumeMesh_Tops"));
    this->HbkCostumeMeshCompInner = CreateDefaultSubobject<UHbkPlayerCostumeMeshComponent>(TEXT("CostumeMesh_Inner"));
    this->HbkCostumeMeshCompBottoms = CreateDefaultSubobject<UHbkPlayerCostumeMeshComponent>(TEXT("CostumeMesh_Bottoms"));
    this->HbkCostumeMeshCompShoes = CreateDefaultSubobject<UHbkPlayerCostumeMeshComponent>(TEXT("CostumeMesh_Shoes"));
    this->HbkCostumeMeshCompMuffler = CreateDefaultSubobject<UHbkPlayerCostumeMeshComponent>(TEXT("CostumeMesh_Muffler"));
    this->HbkCostumeMeshCompRoboArm = CreateDefaultSubobject<UHbkPlayerCostumeMeshComponent>(TEXT("CostumeMesh_RoboArm"));
    this->HbkCostumeMeshCompAccessory = CreateDefaultSubobject<UHbkPlayerCostumeMeshComponent>(TEXT("CostumeMesh_Accessory"));
    this->AssistOffset->SetupAttachment(GetMesh());
    this->HbkCostumeMeshCompHead->SetupAttachment(GetMesh());
    this->HbkCostumeMeshCompTops->SetupAttachment(GetMesh());
    this->HbkCostumeMeshCompInner->SetupAttachment(GetMesh());
    this->HbkCostumeMeshCompBottoms->SetupAttachment(GetMesh());
    this->HbkCostumeMeshCompShoes->SetupAttachment(GetMesh());
    this->HbkCostumeMeshCompMuffler->SetupAttachment(GetMesh());
    this->HbkCostumeMeshCompRoboArm->SetupAttachment(GetMesh());
    this->HbkCostumeMeshCompAccessory->SetupAttachment(GetMesh());
}


