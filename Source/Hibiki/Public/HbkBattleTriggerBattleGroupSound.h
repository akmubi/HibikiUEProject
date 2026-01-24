#pragma once
#include "CoreMinimal.h"
#include "HbkBattleTriggerBattleGroupSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBattleTriggerBattleGroupSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BattleGroupBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BattleGroupBgmRef;
    
    HIBIKI_API FHbkBattleTriggerBattleGroupSound();
};

