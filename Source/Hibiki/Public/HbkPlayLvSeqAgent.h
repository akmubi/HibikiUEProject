#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkPlayLvSeqAgent.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkPlayLvSeqAgent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName callSign;
    
    FHbkPlayLvSeqAgent();
};

