#pragma once
#include "CoreMinimal.h"
#include "EHbkGameOverEventType.h"
#include "HbkGameOverEventInfo.h"
#include "HbkGameOverEventInfoMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameOverEventInfoMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkGameOverEventType, FHbkGameOverEventInfo> GameOverEventMap;
    
    HIBIKI_API FHbkGameOverEventInfoMap();
};

