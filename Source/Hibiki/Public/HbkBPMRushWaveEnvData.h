#pragma once
#include "CoreMinimal.h"
#include "EHbkGameEnvPhase.h"
#include "HbkBPMRushWaveEnvData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushWaveEnvData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGameEnvPhase GameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GimmickActivateExtIntValue;
    
    HIBIKI_API FHbkBPMRushWaveEnvData();
};

