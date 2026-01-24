#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeParam.generated.h"

USTRUCT(BlueprintType)
struct FAttackNoticeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    HIBIKI_API FAttackNoticeParam();
};

