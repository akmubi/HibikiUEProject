#pragma once
#include "CoreMinimal.h"
#include "HbkToughCompInitParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkToughCompInitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToughValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToughRecoveryToughByBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToughRecoveryBeginBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToughLevel;
    
    HIBIKI_API FHbkToughCompInitParam();
};

