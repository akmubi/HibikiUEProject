#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerKeyInput.h"
#include "HbkGrapplingInputInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGrapplingInputInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerKeyInput InputType;
    
    HIBIKI_API FHbkGrapplingInputInfo();
};

