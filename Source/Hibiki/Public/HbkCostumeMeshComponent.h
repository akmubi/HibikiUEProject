#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "HbkPoseableMeshComponent.h"
#include "HbkCostumeMeshComponent.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCostumeMeshComponent : public UHbkPoseableMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumePart PartCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CostumeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* CostumeMesh;
    
public:
    UHbkCostumeMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowMeshKit(FName KitName, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowMaterialSectionBySlotName(FName materialSlotName, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowDefaultMeshKit(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCostume();
    
    UFUNCTION(BlueprintCallable)
    bool PutOnCostume(const FGameplayTag& NewCostumeTag, USkeletalMesh* NewMesh);
    
};

