#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "HbkCineCameraActor.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CinemaCameraInterp;
    
    AHbkCineCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCinemaCameraInterp(float Interp);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerCameraRotation(bool bYaw, bool bPitch);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerCameraDirection();
    
    UFUNCTION(BlueprintCallable)
    void EnableLevelStreamingVolumes();
    
    UFUNCTION(BlueprintCallable)
    void DisableLevelStreamingVolumes();
    
};

