#pragma once
#include "CoreMinimal.h"
#include "EAttackNoticeType.h"
#include "AttackNoteParamForSt06.generated.h"

USTRUCT(BlueprintType)
struct FAttackNoteParamForSt06 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackNoticeType AttackNoticeType;
    
    HIBIKI_API FAttackNoteParamForSt06();
};

