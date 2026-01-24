#pragma once
#include "CoreMinimal.h"
#include "EHbkRestartEventType.h"
#include "HbkRestartEventInfo.h"
#include "HbkRestartEventInfoMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkRestartEventInfoMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkRestartEventType, FHbkRestartEventInfo> RestartEventMap;
    
    HIBIKI_API FHbkRestartEventInfoMap();
};

