#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkCostumePart.h"
#include "HbkCostumeMeshKitOrderList.h"
#include "HbkCostumeDataRow.generated.h"

class UMaterialInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkCostumeDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumePart PartCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseShadowPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* FaceMaskShadowMI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeMeshKitOrderList MeshKitOrderList;
    
    FHbkCostumeDataRow();
};

