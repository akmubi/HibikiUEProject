#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkGameplayTask_EVDefeatBattleEvent.h"
#include "HbkGameplayTask_EVDefeatBattleTimeElapsedEvent.h"
#include "HbkGameplayTask_EVDefeatBattleSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkGameplayTask_EVDefeatBattleSettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimitSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVDefeatBattleEvent ChaiEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVDefeatBattleEvent PeppermintEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVDefeatBattleEvent MacaronEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVDefeatBattleEvent KillEnemyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVDefeatBattleTimeElapsedEvent TimeElapsedEvent;
    
    UHbkGameplayTask_EVDefeatBattleSettingsDataAsset();

};

