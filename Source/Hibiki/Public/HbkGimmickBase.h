#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkNote.h"
#include "HbkGimmickBase_ActivateDelegateDelegate.h"
#include "HbkGimmickBase_ActivateExtIntDelegateDelegate.h"
#include "HbkGimmickBase_DeactivateDelegateDelegate.h"
#include "HbkGimmickBase_DeactivateExtIntDelegateDelegate.h"
#include "HbkGimmickBase_DeadDelegateDelegate.h"
#include "HbkGimmickBase_DeadInfo_t.h"
#include "HbkGimmickBase_PauseResumeAnimDelegateDelegate.h"
#include "HbkGimmickBase_ReadyDelegateDelegate.h"
#include "HbkGimmickBase_ReturnCheckPointDelegateDelegate.h"
#include "HbkGimmickBase_SignificanceStateChangedDelegate.h"
#include "HbkGimmickBase_SoundInfo_t.h"
#include "HbkMultiItemTickets.h"
#include "HbkGimmickBase.generated.h"

class UCurveFloat;
class UHbkGameAgentComponent;
class UHbkGimmickVfxComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmickBase : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_ReadyDelegate OnReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_DeadDelegate OnDeadEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_ActivateDelegate OnActivateGimmick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_ActivateExtIntDelegate OnActivateGimmickExtInt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_DeactivateDelegate OnDeactivateGimmick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_DeactivateExtIntDelegate OnDeactivateGimmickExtInt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_ReturnCheckPointDelegate OnReturnCheckPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_PauseResumeAnimDelegate OnPauseAnimGimmick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_PauseResumeAnimDelegate OnResumeAnimGimmick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOldSyncProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitSyncIsSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoveCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t MoveCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopTickForReturnCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool significanceDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ignoreActorTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ignoreParticleComponentTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ignoreSplineMoveComponentTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ignoreInteractTargetComponentTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ignoreDamageComponentTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ignoreFlashingLightComponentTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float significanceDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector significanceLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float noRenderMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minTickInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_SignificanceStateChanged OnSignificanceStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSignificanceStateActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBase_DeadInfo_t deadInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBase_SoundInfo_t> GimmickSoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets DropItemTickets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote SyncNote;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceInitSyncDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayInitSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayNoteCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGimmickVfxComponent* VFXComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkGimmickBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPartnerIconEnabled(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHalfEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnBarEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void On8thEvent(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void On16thEvent(int32 NoteCount, bool bOnBeat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkNote GetSyncNote(int32 InitRegisterParamIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ForcePauseTick(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool CopyAkComp2SoundInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void CommonResourceLoadEnd();
    

    // Fix for true pure virtual functions not being implemented
};

