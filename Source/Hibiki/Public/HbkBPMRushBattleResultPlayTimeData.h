#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushBattleResultPlayTimeData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushBattleResultPlayTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BorderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayTime;
    
    HIBIKI_API FHbkBPMRushBattleResultPlayTimeData();
};

