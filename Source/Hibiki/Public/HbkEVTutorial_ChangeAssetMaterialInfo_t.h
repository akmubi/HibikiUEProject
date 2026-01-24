#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEVTutorial_ChangeAssetMaterialParameterInfo_t.h"
#include "HbkEVTutorial_ChangeAssetMaterialInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkEVTutorial_ChangeAssetMaterialInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MaterialTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEVTutorial_ChangeAssetMaterialParameterInfo_t> MaterialParam;
    
    HIBIKI_API FHbkEVTutorial_ChangeAssetMaterialInfo_t();
};

