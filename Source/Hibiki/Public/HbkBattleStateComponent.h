#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BattleStateChangeDelegateDelegate.h"
#include "HbkBattleStateParam.h"
#include "HbkDamageCorrectionParam.h"
#include "HbkBattleStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBattleStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleStateChangeDelegate OnStateChangePre;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleStateChangeDelegate OnStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleStateChangeDelegate OnStateChangeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleStateChangeDelegate OnLastStateEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBattleStateParam> StateParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateCheckUserCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreStateCheckUserCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLinkSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkDamageCorrectionParam> DamageCorrectionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBoostDamageFromPreChangeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTransitionOnlyByDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StayHealthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnablePreChangeState;
    
public:
    UHbkBattleStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPermitChangeNextState(bool bIsPermit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserCuePreNoLyrics(int32 CallCount);
    
    UFUNCTION(BlueprintCallable)
    void OnUserCueNoLyrics(int32 CallCount);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthBecomedZero();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeHealth(float Value, float PrevValue, float ValueRate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPermitChangeNextState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeNextState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateMaxCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateHealth(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStateIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugChangeBattleState(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleState(int32 Index);
    
};

