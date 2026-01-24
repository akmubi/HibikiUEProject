#pragma once
#include "CoreMinimal.h"
#include "HbkStrongFlyEm_AIController.h"
#include "HbkEm0660_AIController.generated.h"

UCLASS(Blueprintable)
class AHbkEm0660_AIController : public AHbkStrongFlyEm_AIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraParamName_Far;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstBurningIntervalTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurningIntervalTimeCount_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurningIntervalTimeCount_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnabledBombLaunchRemainingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WWingThrowLoopTimeCount;
    
public:
    AHbkEm0660_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpBurningIntervalRandomRange();
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledBurningState(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBurningIntervalTime(float Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledLaunchProjectileBomb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledBurningState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBurningIntervalTimer() const;
    
};

