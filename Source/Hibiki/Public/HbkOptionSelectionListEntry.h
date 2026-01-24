#pragma once
#include "CoreMinimal.h"
#include "HbkOptionSelectionListEntry.generated.h"

USTRUCT(BlueprintType)
struct FHbkOptionSelectionListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RawValue;
    
    HIBIKI_API FHbkOptionSelectionListEntry();
};

