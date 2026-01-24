#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg0180_OverrideMaterialInfo_t.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0180_OverrideMaterialInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideMaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> OverrideMaterial;
    
    HIBIKI_API FHbkGimmick_bg0180_OverrideMaterialInfo_t();
};

