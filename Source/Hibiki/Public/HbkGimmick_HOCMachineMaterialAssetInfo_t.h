#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_HOCMachineMaterialAssetInfo_t.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FHbkGimmick_HOCMachineMaterialAssetInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pMaterial;
    
    HIBIKI_API FHbkGimmick_HOCMachineMaterialAssetInfo_t();
};

