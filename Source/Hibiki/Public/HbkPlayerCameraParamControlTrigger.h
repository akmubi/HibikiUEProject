#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkCameraBlendParam.h"
#include "HbkTriggerBox.h"
#include "HbkPlayerCameraParamControlTrigger.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerCameraParamControlTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppendFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppendCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AppendFocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam BlendOut;
    
public:
    AHbkPlayerCameraParamControlTrigger(const FObjectInitializer& ObjectInitializer);

};

