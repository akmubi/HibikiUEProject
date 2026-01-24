#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameplayTagContainer.h"
#include "HbkBattleResultParam.h"
#include "HbkStageResultParam.h"
#include "HbkPlayerState.generated.h"

UCLASS(Blueprintable)
class AHbkPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RhythmGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkStageResultParam StageResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkBattleResultParam BattleScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OverChargeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideCostumeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OverrideCostumeStage;
    
    AHbkPlayerState(const FObjectInitializer& ObjectInitializer);

};

