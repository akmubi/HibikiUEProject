#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkBeginBattleParam.h"
#include "HbkGameplayTask_BattleStart.generated.h"

class UHbkGameplayTask_BattleStart;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_BattleStart : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskBattleStartDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleStartDelegate PrepareBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleStartDelegate AfterPrepare;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleStartDelegate ReadyToFight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleStartDelegate BattleBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleStartDelegate ResultBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleStartDelegate ResultEnded;
    
    UHbkGameplayTask_BattleStart(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveReadyToFight();
    
    UFUNCTION(BlueprintCallable)
    void ReceivePrepareBattle();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveEndBattle();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveBeginBattleResult();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveAfterPrepare();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_BattleStart* PlayBeginBattle(UObject* WorldContextObject, FHbkBeginBattleParam BeginParam);
    
};

