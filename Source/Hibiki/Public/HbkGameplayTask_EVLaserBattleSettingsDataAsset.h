#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkBeginBattleParam.h"
#include "HbkGameplayTask_EVLaserBattleEndParam.h"
#include "HbkGameplayTask_EVLaserBattleEnemyData.h"
#include "HbkGameplayTask_EVLaserBattleEventData.h"
#include "HbkGameplayTask_EVLaserBattleSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkGameplayTask_EVLaserBattleSettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeginBattleParam BeginBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleEndParam BattleEndParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleEnemyData EnemyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLaserBattleEventData EventData;
    
    UHbkGameplayTask_EVLaserBattleSettingsDataAsset();

};

