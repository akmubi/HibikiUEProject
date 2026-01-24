#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkReadFlagIO.h"
#include "HbkTalkReadFlagAction.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkReadFlagAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkReadFlagIO ReadFlagIO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FlagNames;
    
    FHbkTalkReadFlagAction();
};

