#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkPlayerShadow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerShadow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector PlayerShadowTargetOffset;
    
    HIBIKI_API FHbkPlayerShadow();
};

