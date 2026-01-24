#pragma once
#include "CoreMinimal.h"
#include "DamageAnimAliveInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FDamageAnimAliveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> Dead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimSequenceBase>> Damage;
    
    HIBIKI_API FDamageAnimAliveInfo();
};

