#pragma once
#include "CoreMinimal.h"
#include "HbkStaticShadowMapDataToLoad.generated.h"

class AHbkStaticShadowMapActor;

USTRUCT(BlueprintType)
struct FHbkStaticShadowMapDataToLoad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkStaticShadowMapActor* ActorToLoad;
    
    HIBIKI_API FHbkStaticShadowMapDataToLoad();
};

