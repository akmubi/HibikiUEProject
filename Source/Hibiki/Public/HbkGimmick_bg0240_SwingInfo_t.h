#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg0240_SwingInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0240_SwingInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float velocityScale;
    
    HIBIKI_API FHbkGimmick_bg0240_SwingInfo_t();
};

