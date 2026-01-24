#pragma once
#include "CoreMinimal.h"
#include "HbkTrackItemCollection.generated.h"

USTRUCT(BlueprintType)
struct FHbkTrackItemCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlagName;
    
    HIBIKI_API FHbkTrackItemCollection();
};

