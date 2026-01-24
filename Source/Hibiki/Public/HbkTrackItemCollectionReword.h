#pragma once
#include "CoreMinimal.h"
#include "HbkTrackItemCollectionReword.generated.h"

USTRUCT(BlueprintType)
struct FHbkTrackItemCollectionReword {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlagName;
    
    HIBIKI_API FHbkTrackItemCollectionReword();
};

