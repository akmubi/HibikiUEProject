#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGimmick_ExhbSpotLightContollerFollower.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ExhbSpotLightContollerFollower {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpotLightBodyAgentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpotLightBeemAgentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ForwardSpotLightAgentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DecalSpotLightAgentTag;
    
    HIBIKI_API FHbkGimmick_ExhbSpotLightContollerFollower();
};

