#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500EnergySwordGazerParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500EnergySwordGazerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    HIBIKI_API FHbkEm7500EnergySwordGazerParam();
};

