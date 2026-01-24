#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkEm7500RhythmParryInitParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500RhythmParryInitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    HIBIKI_API FHbkEm7500RhythmParryInitParam();
};

