#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerInputKeyRemapping.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerInputKeyRemapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceKeyName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestinationKeyName;
    
    HIBIKI_API FHbkPlayerInputKeyRemapping();
};

