#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraTypes.h"
#include "GameplayTask.h"
#include "Templates/SubclassOf.h"
#include "HbkGameplayTask_LoopCameraShake.generated.h"

class UCameraShakeBase;
class UHbkGameplayTask_LoopCameraShake;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_LoopCameraShake : public UGameplayTask {
    GENERATED_BODY()
public:
    UHbkGameplayTask_LoopCameraShake(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLoopCameraShake(bool bImmidiately);
    
    UFUNCTION(BlueprintCallable)
    void StartLoopCameraShake();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartGameOver();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_LoopCameraShake* LoopCameraShake(UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> CameraShake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
};

