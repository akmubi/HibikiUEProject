#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeParameter.generated.h"

USTRUCT(BlueprintType)
struct FAttackNoticeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    HIBIKI_API FAttackNoticeParameter();
};

