#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorActivateInterface.h"
#include "EHbkGimmick_GiantRobotAAnimState.h"
#include "HbkCharacter.h"
#include "HbkGimmick_GiantRobotABeam.h"
#include "HbkGimmick_GiantRobotACameraShake.h"
#include "HbkGimmick_GiantRobotACanon.h"
#include "HbkGimmick_GiantRobotAMove.h"
#include "HbkGimmick_GiantRobotASound.h"
#include "HbkGimmick_GiantRobotAVfx.h"
#include "HbkGimmick_GiantRobotA.generated.h"

class AHbkGimmick_GiantRobotActualArea;
class AHbkGimmick_GiantRobotBeam;
class UHbkGameplayTask_LoopCameraShake;

UCLASS(Blueprintable)
class AHbkGimmick_GiantRobotA : public AHbkCharacter, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotABeam Beam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotACanon Canon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotAMove Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotAVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotASound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotACameraShake CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_GiantRobotBeam* BeamActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_LoopCameraShake* LoopCameraShakeTask;
    
public:
    AHbkGimmick_GiantRobotA(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStopAttack(bool bStop);
    
    UFUNCTION(BlueprintCallable)
    void SetStandbyNoteCount(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void SetAimLocation(FVector Location);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartGameOver();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMove();
    
    UFUNCTION(BlueprintCallable)
    void MoveNextArea(FVector Location, AHbkGimmick_GiantRobotActualArea* ActualArea);
    
    UFUNCTION(BlueprintCallable)
    float GetCanonRangeRate(float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkGimmick_GiantRobotAAnimState GetAnimState() const;
    

    // Fix for true pure virtual functions not being implemented
};

