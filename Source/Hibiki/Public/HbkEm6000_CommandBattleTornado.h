#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossCommandBattleResultDelegateDelegate.h"
#include "EHbkCommandBattleTornadoProcess.h"
#include "EHbkEm6000CommandBattleCommand.h"
#include "EHbkEm6000CommandBattleMode.h"
#include "EHbkNote.h"
#include "HbkEm6000OuterTornado.h"
#include "HbkEm6000TornadoBlendRateUpDownInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_CommandBattleTornado.generated.h"

class AHbkEm6000_Roquefort;
class AHbkEm6000_StageController;
class AHbkEm6520_TornadoMesh;
class UAkAudioEvent;
class UAkComponent;
class UHbkRhythmSynchroComponent;
class UHbkRhythmSynchroSignalComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm6000_CommandBattleTornado : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossCommandBattleResultDelegate OnResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_Roquefort> OwnerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000CommandBattleMode CommandBattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCommandBattleTornadoProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitBarHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitBarHeadNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossBlendRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendRateUpDownWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendRateUpDownInfoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000TornadoBlendRateUpDownInfo> BlendRateUpDownInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCountToBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBossMeshVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterTornadoMoveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterTornadoLifeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterTornadoRotateXPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UParticleSystem*> OuterTornadoParticleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToBlendPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCountToBlendPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCalledPartnerTornado;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCalledPartnerTornadoSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000OuterTornado> OuterTornadoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6520_TornadoMesh> TornadoMeshClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkEm6520_TornadoMesh>> TornadoMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
public:
    AHbkEm6000_CommandBattleTornado(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPartnerAnimationProgress(int32 AnimationProgress, int32 AnimationProgressMax);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSuccess();
    
    UFUNCTION(BlueprintCallable)
    void ChangeFailed();
    
    UFUNCTION(BlueprintCallable)
    void ChangeEnd();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBegin();
    
    UFUNCTION(BlueprintCallable)
    void CallSpawnOuterTornado(EHbkEm6000CommandBattleCommand Command, int32 UniqueId, float Time);
    
    UFUNCTION(BlueprintCallable)
    void CallPartnerTornado(EHbkNote NoteType, int32 Count, bool bIsAdjust);
    
    UFUNCTION(BlueprintCallable)
    void CallBlockOuterTornado(int32 UniqueId);
    
};

