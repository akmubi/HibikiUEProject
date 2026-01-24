#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushBattleResultBorderData.h"
#include "HbkBPMRushBattleResultData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushBattleResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultBorderData BorderS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultBorderData BorderA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultBorderData BorderB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultBorderData BorderC;
    
    HIBIKI_API FHbkBPMRushBattleResultData();
};

