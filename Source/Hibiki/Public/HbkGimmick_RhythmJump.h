#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ForceFeedbackEffect.h"
#include "Engine/EngineTypes.h"
#include "EHbkGimmick_RhythmJump_SaveStateInfo_t.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RhythmJumpCountDelegateDelegate.h"
#include "HbkGimmick_RhythmJumpDelegateDelegate.h"
#include "HbkGimmick_RhythmJump.generated.h"

class AActor;
class UAkAudioEvent;
class UForceFeedbackEffect;
class UMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_RhythmJump : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_RhythmJump_SaveStateInfo_t bSaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotActivateWhileLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceFeedbackParameters ForceFeedbackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BootUpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pBootUpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> IdleSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pIdleSE;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmJumpDelegate OnRhythmJumpBeginJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmJumpDelegate OnRhythmJumpEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmJumpDelegate OnRhythmJumpFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmJumpDelegate OnRhythmJumpOverLandingHeight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmJumpDelegate OnRhythmJumpReachedJumpApex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmJumpCountDelegate OnRhythmJumpSuccessInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmJumpDelegate OnRhythmJumpSuccessLastInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pBaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pFrameMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pDisplayMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pHologram00Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pHologram01Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pHologram02Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pSpectrum01Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pSpectrum02Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pSpectrum03Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pSpectrum04Mesh;
    
public:
    AHbkGimmick_RhythmJump(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpSuccessLastInput();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpSuccessInput(int32 JumpCount);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpReachedJumpApex();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpOverLandingHeight();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpFailed();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpEnd();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpBeginJump();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncHalfNoteEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncBeatEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSync8thEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSync16thEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnEndStreamingLoading();
    
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginStreamingLoading();
    
};

