#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushBattleResultPlayTimeData.h"
#include "HbkBPMRushBattleResultBorderData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushBattleResultBorderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BorderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultPlayTimeData PlayTimeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultPlayTimeData PlayTimeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultPlayTimeData PlayTimeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultPlayTimeData PlayTimeC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalScore;
    
    HIBIKI_API FHbkBPMRushBattleResultBorderData();
};

