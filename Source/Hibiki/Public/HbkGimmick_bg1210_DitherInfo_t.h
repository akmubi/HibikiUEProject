#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg1210_DitherInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_bg1210_DitherInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ditherMatName;
    
    HIBIKI_API FHbkGimmick_bg1210_DitherInfo_t();
};

