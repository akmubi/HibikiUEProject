#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HBkMGRhythmTower_KaleBonusInfo.h"
#include "HbkMGRhythmTower_EnemyBonusInfo.h"
#include "HbkMGRhythmTower_GlobalInfo.h"
#include "HbkMGRhythmTower_MimosaBonusInfo.h"
#include "HbkMGRhythmTower_PlayerBonusInfo.h"
#include "HbkMGRhythmTower_QABonusInfo.h"
#include "HbkMGRhythmTower_RekkaBonusInfo.h"
#include "HbkMGRhythmTower_ResultInfo.h"
#include "HbkMGRhythmTower_RoquefortBonusInfo.h"
#include "HbkMGRhythmTower_SystemAsset.generated.h"

UCLASS(Blueprintable)
class UHbkMGRhythmTower_SystemAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_GlobalInfo GlobalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_ResultInfo ResultInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_PlayerBonusInfo PlayerBonusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_EnemyBonusInfo EnemyBonusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_QABonusInfo QABossBonusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_RekkaBonusInfo RekkaBossBonusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_MimosaBonusInfo MimosaBossBonusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_RoquefortBonusInfo RoquefortBossBonusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHBkMGRhythmTower_KaleBonusInfo KaleBossBonusInfo;
    
    UHbkMGRhythmTower_SystemAsset();

};

