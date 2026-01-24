#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkGraffitiCollectTalkData.generated.h"

USTRUCT(BlueprintType)
struct FHbkGraffitiCollectTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTalkSessionConf> TalkSessionConf;
    
    HIBIKI_API FHbkGraffitiCollectTalkData();
};

