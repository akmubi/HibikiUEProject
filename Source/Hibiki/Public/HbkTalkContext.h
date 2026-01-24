#pragma once
#include "CoreMinimal.h"
#include "HbkTalkContext.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkScriptRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkOption;
    
    FHbkTalkContext();
};

