#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HbkCameraBlendParam.h"
#include "HbkAnimNotifyState_ContinueChargeYCamera.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_ContinueChargeYCamera : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam BlendOutParam;
    
    UHbkAnimNotifyState_ContinueChargeYCamera();

};

