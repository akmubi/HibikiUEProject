#pragma once
#include "CoreMinimal.h"
#include "HbkLoadLevelInstanceInfo_t.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLoadLevelInstanceInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> loadLevel;
    
    FHbkLoadLevelInstanceInfo_t();
};

