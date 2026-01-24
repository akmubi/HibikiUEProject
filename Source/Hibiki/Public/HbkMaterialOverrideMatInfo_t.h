#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialOverrideMatInfo_t.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FHbkMaterialOverrideMatInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> OverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pOverrideMaterial;
    
    HIBIKI_API FHbkMaterialOverrideMatInfo_t();
};

