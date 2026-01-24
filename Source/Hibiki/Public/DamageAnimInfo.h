#pragma once
#include "CoreMinimal.h"
#include "DamageAnimAliveInfo.h"
#include "DamageAnimInfo.generated.h"

USTRUCT(BlueprintType)
struct FDamageAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageAnimAliveInfo OnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageAnimAliveInfo InAir;
    
    HIBIKI_API FDamageAnimInfo();
};

