#pragma once
#include "CoreMinimal.h"
#include "HbkBeginBattleParam.h"
#include "HbkGameplayTask_EVLabBattle.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabBattle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeginBattleParam BeginBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BattleStartBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BattleEndBGM;
    
    HIBIKI_API FHbkGameplayTask_EVLabBattle();
};

