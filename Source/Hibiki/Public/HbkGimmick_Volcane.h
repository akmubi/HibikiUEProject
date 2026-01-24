#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_VolcaneAnimState.h"
#include "EHbkNote.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_VolcaneAction.h"
#include "HbkGimmick_VolcaneCameraShake.h"
#include "HbkGimmick_VolcaneInterlock.h"
#include "HbkGimmick_VolcaneSound.h"
#include "HbkGimmick_VolcaneVfx.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkGimmick_Volcane.generated.h"

class AHbkGimmick_VolcaneEruption;
class USceneComponent;

UCLASS(Blueprintable)
class AHbkGimmick_Volcane : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWaitingActivityDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSizedUpDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEruptionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeactivatedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeactivatedDelegate OnDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitingActivityDelegate OnWaitingActivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSizedUpDelegate OnSizedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEruptionDelegate OnEruption;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneInterlock Interlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneCameraShake CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* VolcaneBombSpawnComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSizedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    AHbkGimmick_VolcaneEruption* CurrentVolcaneEruption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    AHbkGimmick_VolcaneEruption* ReservedVolcaneEruption;
    
public:
    AHbkGimmick_Volcane(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSignCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetEruptionSignCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityCount(int32 FirstCount, int32 NextCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnPostResetPlayerPosition(const FTransform& Transform, const FGameplayTagContainer& RestartPointTags);
    
    UFUNCTION(BlueprintCallable)
    void OnEruptionStart(const FString& UserString);
    
    UFUNCTION(BlueprintCallable)
    void OnEndSpecialAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnEndRhythmParryAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnEndJamComboAttack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateVolcaneBomb(EHbkNote Note);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginSpecialAttack(bool bIncludingCamera);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginRhythmParryAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginJamComboAttack();
    
    UFUNCTION(BlueprintCallable)
    void NoteSyncWhole(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteSyncQuarter(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteSyncHalf(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteSync8th(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteSync16th(int32 noteCnt, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkGimmick_VolcaneAnimState GetAnimState() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableAimPlayer(int32 noteCnt, bool bDownBeat);
    
};

