#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkBossQTESequenceInfo.h"
#include "HbkGameplayTask_BossQTE.generated.h"

class AHbkBossCharacterBase;
class AHbkLevelSequenceActor;
class UAkAudioEvent;
class UHbkGameplayTask_BossQTE;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_BossQTE : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTaskBossQTEDelegate, bool, QTESuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBossQTEDelegate OnFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBossQTEDelegate OnStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBossQTEDelegate OnStartLastScene;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkLevelSequenceActor> LevelSequencer;
    
public:
    UHbkGameplayTask_BossQTE(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartBeatHitWhenQuarter(int32 NextCount);
    
    UFUNCTION(BlueprintCallable)
    void StartBeatHitUI();
    
    UFUNCTION(BlueprintCallable)
    void SetNextNoteCoundDownSE(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetInputfailure();
    
    UFUNCTION(BlueprintCallable)
    void SetAdjustPlayRate(int32 CutLengthNote);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayRate(bool bSyncBPM);
    
    UFUNCTION(BlueprintCallable)
    void ReachImpactFrame();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_BossQTE* PlayBossQTE(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor, const FHbkBossQTESequenceInfo QTEInfo, AHbkBossCharacterBase* BossActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSequenceStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnQuarterForSE(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnQuarterForBH(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnInputSuccess(bool bPerfect);
    
    UFUNCTION(BlueprintCallable)
    void OnInputFailure();
    
};

