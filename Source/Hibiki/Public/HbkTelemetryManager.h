#pragma once
#include "CoreMinimal.h"
#include "EHbkBattleResultType.h"
#include "HbkBattleResultParam.h"
#include "HbkHideOutChallengeParamRow.h"
#include "HbkHideOutChallengeProgressChallengeParam.h"
#include "HbkHideOutExtraChallengeParamRow.h"
#include "HbkHideOutExtraChallengeProgressChallengeParam.h"
#include "HbkStageResultDetail.h"
#include "HbkStageResultStats.h"
#include "TngGameSystem.h"
#include "HbkTelemetryManager.generated.h"

class UDataTable;
class UHbkBattleManager;
class UObject;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UHbkTelemetryManager : public UTngGameSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBattleManager* BattleManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ObjectInfoGameProgressTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ObjectInfoCharacterTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ObjectInfoActionTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ObjectInfoItemTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ObjectInfoChallengeTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SpectraRoomInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ObjectInfoGameProgressTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ObjectInfoCharacterTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ObjectInfoActionTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ObjectInfoItemTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ObjectInfoChallengeTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpectraRoomInfoTablePtr;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendEventsEnabled;
    
public:
    UHbkTelemetryManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnStageCompleted(int32 TotalScore, int32 StageRank, const TArray<FHbkStageResultDetail>& BattleDetails, const FHbkStageResultStats& StageStats);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied();
    
    UFUNCTION(BlueprintCallable)
    void OnExtraChallengeUnlocked(const FHbkHideOutExtraChallengeParamRow& ChallengeParam, const FHbkHideOutExtraChallengeProgressChallengeParam& ChallengeProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeUnlocked(const FHbkHideOutChallengeParamRow& ChallengeParam, const FHbkHideOutChallengeProgressChallengeParam& ChallengeProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleCompleted(const FHbkBattleResultParam& BattleResult, EHbkBattleResultType ResultType);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_Notify_PlayWith808(UObject* WorldContextObject);
    
};

