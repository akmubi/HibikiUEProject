#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeReactionParamForSt06.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAttackNoticeReactionParamForSt06 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayerBHActionOnSuccessfull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EnemyBHActionOnSuccessfull;
    
    HIBIKI_API FAttackNoticeReactionParamForSt06();
};

