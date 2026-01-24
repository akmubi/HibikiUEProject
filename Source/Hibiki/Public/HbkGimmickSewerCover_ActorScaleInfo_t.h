#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickSewerCover_ActorScaleInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickSewerCover_ActorScaleInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MultiplyValue;
    
    HIBIKI_API FHbkGimmickSewerCover_ActorScaleInfo_t();
};

