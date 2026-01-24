#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkGimmick_CNMNDisplayTalk.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_CNMNDisplayTalk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf TalkSessionConf;
    
    HIBIKI_API FHbkGimmick_CNMNDisplayTalk();
};

