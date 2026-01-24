#pragma once
#include "CoreMinimal.h"
#include "HbkDevPlayLogLevelEntry.generated.h"

USTRUCT(BlueprintType)
struct FHbkDevPlayLogLevelEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowProfileLogs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidLogLocationParam;
    
    HIBIKI_API FHbkDevPlayLogLevelEntry();
};

