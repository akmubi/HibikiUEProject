#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000TornadoBlendRateUpDownInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000TornadoBlendRateUpDownInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    HIBIKI_API FHbkEm6000TornadoBlendRateUpDownInfo();
};

