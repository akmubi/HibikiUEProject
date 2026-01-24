#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DebugBuildingSlideInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DebugBuildingSlideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSplineActorLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveNoteCount;
    
    HIBIKI_API FHbkGimmick_DebugBuildingSlideInfo();
};

