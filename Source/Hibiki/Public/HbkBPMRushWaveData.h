#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkNote.h"
#include "HbkBeginBattleParam.h"
#include "HbkBPMRushWaveData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushWaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartWaveTriggerBoxTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartWaveTriggerBoxCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartWavePlayerLocationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote WaveChangeTransitionNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveChangeTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveChangeTransitionNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeginBattleParam BeginBattleParam;
    
    HIBIKI_API FHbkBPMRushWaveData();
};

