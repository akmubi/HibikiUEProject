#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkBeginBattleParam.h"
#include "HbkGameplayTask_EVCannonBattleEndData.h"
#include "HbkGameplayTask_EVCannonBattleEnemyData.h"
#include "HbkGameplayTask_EVCannonBattleEventData.h"
#include "HbkGameplayTask_EVCannonBattleHPEventData.h"
#include "HbkGameplayTask_EVCannonBattleSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkGameplayTask_EVCannonBattleSettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeginBattleParam BeginBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVCannonBattleEndData BattleEndParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGameplayTask_EVCannonBattleEnemyData> InfiniteGroupEnemyArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVCannonBattleEventData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGameplayTask_EVCannonBattleHPEventData> CannonHPEventData;
    
    UHbkGameplayTask_EVCannonBattleSettingsDataAsset();

};

