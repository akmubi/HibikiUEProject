#pragma once
#include "CoreMinimal.h"
#include "HbkGrapplingInfo.h"
#include "HbkGrapplingInfoQueue.generated.h"

USTRUCT(BlueprintType)
struct FHbkGrapplingInfoQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGrapplingInfo GrapplingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidTime;
    
    HIBIKI_API FHbkGrapplingInfoQueue();
};

