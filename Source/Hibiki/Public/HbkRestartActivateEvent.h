#pragma once
#include "CoreMinimal.h"
#include "HbkRestartActivateInfo.h"
#include "HbkRestartActivateEvent.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRestartActivateEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRestartActivateInfo> ActivateInfos;
    
    FHbkRestartActivateEvent();
};

