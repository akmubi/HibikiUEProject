#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_MGMagnetRail.generated.h"

class AHbkGimmick_MagnetRailObstacleController;
class UHbkGameplayTask_MGMagnetRail;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGMagnetRail : public UGameplayTask {
    GENERATED_BODY()
public:
    UHbkGameplayTask_MGMagnetRail(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSuccess(bool bIsPerfect);
    
    UFUNCTION(BlueprintCallable)
    void OnObstacleQTEDamageAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimSwingR(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimSwingL(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnFailure();
    
    UFUNCTION(BlueprintCallable)
    void OnEndMoveSpline();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_MGMagnetRail* EventMagnetRailMinigame(UObject* WorldContextObject, AHbkGimmick_MagnetRailObstacleController* ObstacleController);
    
};

