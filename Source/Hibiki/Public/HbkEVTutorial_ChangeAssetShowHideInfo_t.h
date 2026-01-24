#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEVTutorial_ChangeAssetShowHideInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkEVTutorial_ChangeAssetShowHideInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ShowTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HideTag;
    
    HIBIKI_API FHbkEVTutorial_ChangeAssetShowHideInfo_t();
};

