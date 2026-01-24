#pragma once
#include "CoreMinimal.h"
#include "HbkGraffitiCollectTalkData.h"
#include "HbkGraffitiCollectTalkEventData.generated.h"

USTRUCT(BlueprintType)
struct FHbkGraffitiCollectTalkEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGraffitiCollectTalkData ChaiTalk;
    
    HIBIKI_API FHbkGraffitiCollectTalkEventData();
};

