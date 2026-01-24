#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_IntermissionTaskBase.h"
#include "HbkEm6000_IntermissionTaskPhase5.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class AHbkEm6000_IntermissionTaskPhase5 : public AHbkEm6000_IntermissionTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TransformWolfStateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossFloorLocationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootStepHeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerInhibitControlTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossGaugeRecoverTime;
    
public:
    AHbkEm6000_IntermissionTaskPhase5(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndFinishCamera();
    
};

