#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeParamForSt06.generated.h"

USTRUCT(BlueprintType)
struct FAttackNoticeParamForSt06 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    HIBIKI_API FAttackNoticeParamForSt06();
};

