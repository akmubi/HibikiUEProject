#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "EHbkTalkFadeColor.h"
#include "EHbkTalkScreenTransition.h"
#include "HbkGameplayTask_ActivateCamera.generated.h"

class UHbkGameplayTask_ActivateCamera;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_ActivateCamera : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskActivateCameraDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskActivateCameraDelegate OnFinished;
    
    UHbkGameplayTask_ActivateCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_ActivateCamera* ActivateCameraTask(UObject* WorldContextObject, FGameplayTagContainer Tags, FName callSign, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bBlendLockOutgoing, EHbkTalkScreenTransition TransitionFunc, float FuncDuration, EHbkTalkFadeColor FuncColor);
    
};

