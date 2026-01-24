#pragma once
#include "CoreMinimal.h"
#include "HbkSideStoryPerformerStatus.generated.h"

USTRUCT(BlueprintType)
struct FHbkSideStoryPerformerStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    HIBIKI_API FHbkSideStoryPerformerStatus();
};

