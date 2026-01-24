#pragma once
#include "CoreMinimal.h"
#include "EHbkARPostState.h"
#include "HbkRestartPostProcessEvent.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRestartPostProcessEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsARPostEnalbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkARPostState ARPostState;
    
    FHbkRestartPostProcessEvent();
};

