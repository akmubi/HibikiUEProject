#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialFlipParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkMaterialFlipParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialPoolKey;
    
    HIBIKI_API FHbkMaterialFlipParam();
};

