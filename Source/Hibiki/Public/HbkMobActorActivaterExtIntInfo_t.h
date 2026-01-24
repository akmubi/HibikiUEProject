#pragma once
#include "CoreMinimal.h"
#include "HbkMobActorActivaterExtIntInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMobActorActivaterExtIntInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtValue;
    
    HIBIKI_API FHbkMobActorActivaterExtIntInfo_t();
};

