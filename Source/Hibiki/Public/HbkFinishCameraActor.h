#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkCameraActorBase.h"
#include "HbkFinishCameraParam.h"
#include "HbkFinishCameraActor.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkFinishCameraActor : public AHbkCameraActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkFinishCameraParam CameraParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFinishCameraParam> CameraParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> FinishCameraTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FinishCameraSound;
    
public:
    AHbkFinishCameraActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndedEventBlendCamera();
    
};

