#pragma once
#include "CoreMinimal.h"
#include "ActorActivateInterface.h"
#include "EHbkGimmick_GiantRobotCAnimState.h"
#include "HbkCharacter.h"
#include "HbkGimmick_GiantRobotCBeam.h"
#include "HbkGimmick_GiantRobotCCameraShake.h"
#include "HbkGimmick_GiantRobotCCanon.h"
#include "HbkGimmick_GiantRobotC.generated.h"

class AHbkGimmick_GiantRobotBeam;
class UHbkGameplayTask_LoopCameraShake;

UCLASS(Blueprintable)
class AHbkGimmick_GiantRobotC : public AHbkCharacter, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotCCanon Canon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotCBeam Beam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotCCameraShake CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_GiantRobotBeam* BeamActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_LoopCameraShake* LoopCameraShakeTask;
    
public:
    AHbkGimmick_GiantRobotC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnStartGameOver();
    
    UFUNCTION(BlueprintCallable)
    float GetCanonRangeRate(float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkGimmick_GiantRobotCAnimState GetAnimState() const;
    

    // Fix for true pure virtual functions not being implemented
};

