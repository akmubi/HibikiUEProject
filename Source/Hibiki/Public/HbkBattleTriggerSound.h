#pragma once
#include "CoreMinimal.h"
#include "HbkBattleTriggerBattleGroupSound.h"
#include "HbkBattleTriggerSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBattleTriggerSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BattleStartBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BattleStartBgmRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BattleEndBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BattleEndBgmRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBattleTriggerBattleGroupSound> BattleGroupSounds;
    
    HIBIKI_API FHbkBattleTriggerSound();
};

