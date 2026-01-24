#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EHbkGimmickVfxPlayMode.h"
#include "EHbkNote.h"
#include "EHbkTranslucentLayer.h"
#include "HbkGimmickVfxOnActivateExtInt_t.h"
#include "HbkGimmickVfxRangeInfo_t.h"
#include "HbkGimmickVfxSplineMovePointInfo_t.h"
#include "HbkGimmickVfxComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkGimmickVfxComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncMusicId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote SyncBeatNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncLoopBarCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SpecifyBeatCountArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SyncBPMPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachJointSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AttachRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickVfxRangeInfo_t RangeInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTranslucentLayer TranslucentSortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickVfxPlayMode DefaultPlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DefaultVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickVfxPlayMode OnActivatePlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivateVFXDeactivateWhenDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillWhenDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OnActivateVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnActivateSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickVfxOnActivateExtInt_t> OnActivateExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickVfxPlayMode SplineMovePlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SplineMoveStartVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SplineMoveEndVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickVfxSplineMovePointInfo_t> SplineCurveInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> DefaultVfxPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> OnActivateVfxPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> OnActivateExtIntVfxPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> SplineMoveStartVfxPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> SplineMoveEndVfxPSC;
    
public:
    UHbkGimmickVfxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnRegisterEventInRSS();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterEventInRSS(EHbkNote NoteType, int32 LoopCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveSplineMoveStart();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveSplineMovePoint(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveSplineMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveDeactivateGimmickExtInt(AActor* InActivator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveDeactivateGimmick(AActor* InActivator);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveBeatEvent(const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveActivateGimmickExtInt(AActor* InActivator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveActivateGimmick(AActor* InActivator);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote8(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote4(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote2(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote16(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote1(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayingMusic(int32 MusicId);
    
public:
    UFUNCTION(BlueprintCallable)
    void CopyGimmickVfxComp(AActor* pActor);
    
};

