#pragma once
#include "CoreMinimal.h"
#include "HbkTalkEventCameraAction.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkEventCameraAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitTime;
    
    FHbkTalkEventCameraAction();
};

