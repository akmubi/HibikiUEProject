#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SplineMagnetMoveType.h"
#include "EHbkGimmick_SplineMagnetRailEndType.h"
#include "HbkGimmick_MagnetRailJumpInfo.h"
#include "HbkGimmick_MagnetRailWarpInfo.h"
#include "HbkGimmick_SplineMagnetBase.h"
#include "SplineMagnetDelegateDelegate.h"
#include "HbkGimmick_SplineMagnet.generated.h"

class AHbkPlayerCharacterBase;
class UAkAudioEvent;
class UAnimSequenceBase;
class UHbkMagneticPointComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class AHbkGimmick_SplineMagnet : public AHbkGimmick_SplineMagnetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMagnetDelegate OnSplineMagnetHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMagnetDelegate OnSplineMagnetReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMagnetDelegate OnBeginSplineMagnet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMagnetDelegate OnEndSplineMagnet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_SplineMagnetMoveType moveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplineEndToMatchSyncNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplineEndToMatchSyncNoteDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_SplineMagnetRailEndType RailEndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailWarpInfo WarpInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MagnetRailJumpInfo JumpInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* RailStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* RailStartRightAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* RailStartLeftAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* RailEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ShortRailEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* RailEndSt04EscapeToEVAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SwingLAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SwingRAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* QTESuccessAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* QTESuccessAnim_ForEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DamageAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DieAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> PlaySE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlaySeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StopSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopSeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* VfxRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> AvoidJustVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* AvoidJustVfxRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> VfxExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* VfxExtIntRef;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDummy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bMagnetActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bEndPoint;
    
public:
    AHbkGimmick_SplineMagnet(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMagnetRelease(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailStart();
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimSwingR(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimSwingL(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimRailStart(int32 AnimIndex, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimRailEnd(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimQTE_ForEnemy(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimQTE(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimDie(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimDamage(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetHit(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet);
    
public:
    UFUNCTION(BlueprintCallable)
    void MagnetCollisionEnabled(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDetachFromMagnet();
    
    UFUNCTION(BlueprintCallable)
    void DetachFromMagnet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginMoveSpline(int32 NoteCount, bool bOnBeat);
    
};

