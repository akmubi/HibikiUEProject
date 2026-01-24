#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHbkTalkScreenTransition.h"
#include "HbkEnemyCharacter.h"
#include "HbkTalkContext.h"
#include "Templates/SubclassOf.h"
#include "HbkEm0730_Samurai.generated.h"

class AHbkEm0730_Spotlight;
class AHbkEnemyAIController;
class UAkAudioEvent;
class UAkComponent;
class UAnimSequenceBase;
class UCurveFloat;
class UHbkSamuraiHaikuWidget;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0730_Samurai : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BladeLineEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkSamuraiHaikuWidget> HaikuUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSamuraiHaikuWidget> HaikuUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkSamuraiHaikuWidget* pHaikuUI;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TipsTalkRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCurveFloat> LaunchedBladePosCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkAudioEvent> LaunchedBaldeSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchedBladeMoveLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* LaunchedBladeAkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTwinBladeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GuardDisableTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardCounterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ContinuousRepelledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLastImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AngerAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TurnOffTwinBladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CounterAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer KorsicaWindDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PerfectParryAnimLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PerfectParryAnimHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* HealthTriggerCounterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* HealthTriggerCounterShortAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm0730_Spotlight> SpotlightActor;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UParticleSystemComponent>> BladeLineEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondTriggerHealth;
    
public:
    AHbkEm0730_Samurai(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TipsTalkEnd(const FHbkTalkContext TalkContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartScreenTransition(EHbkTalkScreenTransition TransitionType);
    
    UFUNCTION(BlueprintCallable)
    void StartBladeLineEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetTwinBladeMode(bool NewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPerfectGuardDisableTime(float DisableTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnabledSpecialEnv(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetContinuousRepelledCount();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnToughDeactivate();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnHealthTriggered(AHbkEnemyCharacter* EnemyPawn, float TriggerHealthRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTwinBladeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerfectGuardEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContinuousRepelledSuccessed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAngeredWithCameraInStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAngered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAngerAttackCountFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGuardCounterDistance() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearAttackEffects(AHbkEnemyCharacter* EmPawn, AHbkEnemyAIController* EmAI);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAngerAttackCount();
    
};

