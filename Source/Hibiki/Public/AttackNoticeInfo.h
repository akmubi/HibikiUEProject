#pragma once
#include "CoreMinimal.h"
#include "EAttackNoticeType.h"
#include "AttackNoticeInfo.generated.h"

USTRUCT(BlueprintType)
struct FAttackNoticeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackNoticeType AttackNoticeType;
    
    HIBIKI_API FAttackNoticeInfo();
};

