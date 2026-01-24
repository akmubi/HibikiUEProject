#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkEventLookAtMode.h"
#include "HbkTalkEventLookAtParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkEventLookAtParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkEventLookAtMode LookAtMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtBlendSpeed;
    
    FHbkTalkEventLookAtParam();
};

