#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkTalkContext.h"
#include "HbkGameplayTask_EVDefeatBattle.generated.h"

class UHbkGameplayTask_EVDefeatBattle;
class UHbkGameplayTask_EVDefeatBattleSettingsDataAsset;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVDefeatBattle : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskPlayerWaitOnGroundDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskPlayerWaitOnGroundDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskPlayerWaitOnGroundDelegate OnPlayerDead;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_EVDefeatBattleSettingsDataAsset* SettingsData;
    
public:
    UHbkGameplayTask_EVDefeatBattle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTalkEnded(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void OnPepDamageBlocked();
    
    UFUNCTION(BlueprintCallable)
    void OnMacaronDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnChaiDamageBlocked();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVDefeatBattle* EventDefeatBattle(UObject* WorldContextObject, UHbkGameplayTask_EVDefeatBattleSettingsDataAsset* NewSettingsData);
    
};

