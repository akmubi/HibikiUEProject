#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkStageResultDetail.h"
#include "HbkStageResultStats.h"
#include "HbkPSNActivityController.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkPSNActivityController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainStoryActivityId;
    
public:
    UHbkPSNActivityController();

private:
    UFUNCTION(BlueprintCallable)
    void OnStageCompleted(int32 TotalScore, int32 StageRank, const TArray<FHbkStageResultDetail>& BattleDetails, const FHbkStageResultStats& StageStats);
    
};

