#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Camera/PlayerCameraManager.h"
#include "EHbkCameraViewTargetAfterDeactive.h"
#include "HbkCameraInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkCameraInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkCameraInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDeactivateBlendParam(EHbkCameraViewTargetAfterDeactive BlendViewTargetType, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActivateBlendParam(float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing);
    
};

