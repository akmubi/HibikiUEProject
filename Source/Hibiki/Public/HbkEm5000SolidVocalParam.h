#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000SolidVocalParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm5000SolidVocalParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FHbkEm5000SolidVocalParam();
};

