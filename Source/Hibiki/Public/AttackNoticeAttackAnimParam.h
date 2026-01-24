#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeAttackAnimParam.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAttackNoticeAttackAnimParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DamageToAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdleToAnim;
    
    HIBIKI_API FAttackNoticeAttackAnimParam();
};

