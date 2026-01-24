#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg1240Action.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_bg1240Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestCount;
    
    HIBIKI_API FHbkGimmick_bg1240Action();
};

