#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeAttackAnimParamForSt06.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAttackNoticeAttackAnimParamForSt06 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DamageToAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdleToAnim;
    
    HIBIKI_API FAttackNoticeAttackAnimParamForSt06();
};

