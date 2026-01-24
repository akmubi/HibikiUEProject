#pragma once
#include "CoreMinimal.h"
#include "HbkTalkTriggerKeyData.generated.h"

USTRUCT(BlueprintType)
struct FHbkTalkTriggerKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    HIBIKI_API FHbkTalkTriggerKeyData();
};

