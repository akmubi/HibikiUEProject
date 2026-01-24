#pragma once
#include "CoreMinimal.h"
#include "HbkSideStoryPosition.h"
#include "HbkSideStoryPerformer.generated.h"

class AHbkCharacter;

USTRUCT(BlueprintType)
struct FHbkSideStoryPerformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkCharacter> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSideStoryPosition Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSideStoryPosition AddPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLastMarch;
    
    HIBIKI_API FHbkSideStoryPerformer();
};

