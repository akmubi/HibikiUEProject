#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHbkBeatHitInputResult.h"
#include "EHbkComboType.h"
#include "JudgeCompSimpleDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkComboJudgeComponent.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UDamageType;
class UDataTable;
class UHbkBeatHitCommandWidget;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkComboJudgeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJudgeCompSimpleDelegate OnComboSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJudgeCompSimpleDelegate OnStopCompleteAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJudgeCompSimpleDelegate OnComboFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UIOffsetVec;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkComboType TargetComboType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ComboDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBeatHitCommandWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> SuccessSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FailedSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FinishSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuccessSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FailedSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FinishSoundData;
    
public:
    UHbkComboJudgeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnableJudge(bool IsEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceiveDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDodge();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerActionEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnloadCompleted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeatHitResult(int32 BeatHitId, EHbkBeatHitInputResult InputResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackAnimStart(const FGameplayTag& AttackTag, int32 ComboCount);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayingAnyAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableJudgeFlag();
    
};

