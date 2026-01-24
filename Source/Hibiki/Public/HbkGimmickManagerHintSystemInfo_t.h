#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmickManagerHintSystemInfo_t.generated.h"

class UHbkHintButtonWidget;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmickManagerHintSystemInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkHintButtonWidget> HintButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeAfterTalk;
    
    FHbkGimmickManagerHintSystemInfo_t();
};

