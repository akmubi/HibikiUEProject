#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushProgressResultData.h"
#include "HbkBPMRushProgressData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSawBattleTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSawUnlockHardModeMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkBPMRushProgressResultData EasyResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkBPMRushProgressResultData NormalResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkBPMRushProgressResultData HardResultData;
    
    HIBIKI_API FHbkBPMRushProgressData();
};

