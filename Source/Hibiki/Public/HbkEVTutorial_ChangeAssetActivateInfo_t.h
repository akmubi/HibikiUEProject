#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEVTutorial_ChangeAssetActivateInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkEVTutorial_ChangeAssetActivateInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer activateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer deactivateTag;
    
    HIBIKI_API FHbkEVTutorial_ChangeAssetActivateInfo_t();
};

