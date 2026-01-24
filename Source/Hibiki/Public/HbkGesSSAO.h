#pragma once
#include "CoreMinimal.h"
#include "HbkGesEngineSSAO.h"
#include "HbkGesGameSSAO.h"
#include "HbkGesSSAO.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesSSAO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesEngineSSAO EngineSSAO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesGameSSAO GameSSAO;
    
    HIBIKI_API FHbkGesSSAO();
};

