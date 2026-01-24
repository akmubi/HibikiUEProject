#pragma once
#include "CoreMinimal.h"
#include "HbkStaticShadowMapDataToLoad.h"
#include "HbkStaticShadowMapDataLoading.generated.h"

USTRUCT(BlueprintType)
struct FHbkStaticShadowMapDataLoading {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkStaticShadowMapDataToLoad> ActorsToLoad;
    
public:
    HIBIKI_API FHbkStaticShadowMapDataLoading();
};

