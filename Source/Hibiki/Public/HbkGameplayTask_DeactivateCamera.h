#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "EHbkCameraViewTargetAfterDeactive.h"
#include "EHbkTalkFadeColor.h"
#include "EHbkTalkScreenTransition.h"
#include "HbkGameplayTask_DeactivateCamera.generated.h"

class UHbkGameplayTask_DeactivateCamera;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_DeactivateCamera : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskDeactivateCameraDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskDeactivateCameraDelegate OnFinished;
    
    UHbkGameplayTask_DeactivateCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_DeactivateCamera* DeactivateCameraTask(UObject* WorldContextObject, FGameplayTagContainer Tags, FName callSign, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bBlendLockOutgoing, EHbkCameraViewTargetAfterDeactive BlendViewTargetType, EHbkTalkScreenTransition TransitionFunc, float FuncDuration, EHbkTalkFadeColor FuncColor);
    
};

