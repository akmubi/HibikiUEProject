#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkHideOutExtraChallengeAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkHideOutExtraChallengeAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChallengeParamTable_RhythmDungeon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChallengeParamTable_BPMRush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChallengeParamTable_ChallengeScore;
    
    UHbkHideOutExtraChallengeAsset();

};

