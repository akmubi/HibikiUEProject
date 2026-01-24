#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkAssistCharacterInfo.generated.h"

class AHbkRhythmSign;

USTRUCT(BlueprintType)
struct FHbkAssistCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkRhythmSign> AssistCharaClass;
    
    HIBIKI_API FHbkAssistCharacterInfo();
};

