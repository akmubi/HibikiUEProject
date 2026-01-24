#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkBeginBattleParam.h"
#include "HbkGameplayTask_QuickBattleStart.generated.h"

class UHbkGameplayTask_QuickBattleStart;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_QuickBattleStart : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskBattleQuickStartDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleQuickStartDelegate BattleBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleQuickStartDelegate ResultBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleQuickStartDelegate ResultEnded;
    
    UHbkGameplayTask_QuickBattleStart(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveEndBattle();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveBeginBattleResult();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveBeginBattle();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_QuickBattleStart* PlayQuickBeginBattle(UObject* WorldContextObject, FHbkBeginBattleParam BeginParam);
    
};

