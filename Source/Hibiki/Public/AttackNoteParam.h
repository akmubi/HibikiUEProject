#pragma once
#include "CoreMinimal.h"
#include "AttackNoteParam.generated.h"

USTRUCT(BlueprintType)
struct FAttackNoteParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextNoteTime;
    
    HIBIKI_API FAttackNoteParam();
};

