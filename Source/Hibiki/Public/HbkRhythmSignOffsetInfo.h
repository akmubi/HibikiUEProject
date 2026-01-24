#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkRhythmSignOffsetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmSignOffsetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator OffsetRotation;
    
    HIBIKI_API FHbkRhythmSignOffsetInfo();
};

