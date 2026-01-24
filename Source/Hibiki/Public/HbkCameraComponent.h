#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraComponent.h"
#include "HbkCameraComponent.generated.h"

class AActor;
class AHbkAzitoActor;
class AHbkCameraRig_Rail;
class APlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UHbkCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFocalActor(AActor* NewForcalActor, const FVector& InOffsetPivotPoint, APlayerController* FollowToPlayer, bool UseFocalPointLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraRigRail(AHbkCameraRig_Rail* NewCameraRigRail, APlayerController* FollowToPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraAzito(AHbkAzitoActor* NewCameraAzito, APlayerController* FollowToPlayer);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCameraCut();
    
};

