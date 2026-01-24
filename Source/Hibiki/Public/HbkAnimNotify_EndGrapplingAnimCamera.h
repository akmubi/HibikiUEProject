#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_EndGrapplingAnimCamera.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_EndGrapplingAnimCamera : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendOutTime;
    
public:
    UHbkAnimNotify_EndGrapplingAnimCamera();

};

