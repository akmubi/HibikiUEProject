#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkNote.h"
#include "HbkBattleTriggerEnemyResetEvent.generated.h"

USTRUCT(BlueprintType)
struct FHbkBattleTriggerEnemyResetEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnemyResetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote StartDelayNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartDelayNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote EndDelayNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndDelayNoteCount;
    
    HIBIKI_API FHbkBattleTriggerEnemyResetEvent();
};

