#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg0770Restart.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0770Restart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RestartPointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactivateOnRestart;
    
    HIBIKI_API FHbkGimmick_bg0770Restart();
};

