#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackNoticeAttackAnimParamForSt06.h"
#include "AttackNoticeReactionParamForSt06.h"
#include "RhythmParryAndDodgeDelegate.h"
#include "RhythmParryAndDodgeTutorialDelegate.h"
#include "HbkBossRhythmParryAndDodgeComponent.generated.h"

class UAkAudioEvent;
class UAnimSequenceBase;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBossRhythmParryAndDodgeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmParryAndDodge OnRhythmNotice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmParryAndDodge OnRepelledSuccessfull;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmParryAndDodgeTutorial OnPlayTutorial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NoticeObjectSpawnSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ParrySuccessfullSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SuccessVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackNoticeAttackAnimParamForSt06> AttackAnimationList;
    
public:
    UHbkBossRhythmParryAndDodgeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNoticeParam(FAttackNoticeReactionParamForSt06 ReactionParam, UAnimSequenceBase* TriggerHitReactionAnim, bool bIsSuccessIncrementPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetNoteData(const FString& NoteData, int32 NoticeVFXIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetImpactCountSeparation(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void PlayNotice(int32 Index, bool IsResetNoticedIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSyncNextAttackImpact(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRepelled();
    
    UFUNCTION(BlueprintCallable)
    void OnDodge();
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged();
    
    UFUNCTION(BlueprintCallable)
    void CheckDamaged(TArray<FName>& EquipSlotNameList);
    
    UFUNCTION(BlueprintCallable)
    void CancelAttackNotice();
    
    UFUNCTION(BlueprintCallable)
    void BeginNotice();
    
    UFUNCTION(BlueprintCallable)
    void BeginImpact();
    
};

