#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeReactionParam.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAttackNoticeReactionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayerSuccessToBeathit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayerBHActionOnSuccessfull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EnemyBHActionOnSuccessfull;
    
    HIBIKI_API FAttackNoticeReactionParam();
};

