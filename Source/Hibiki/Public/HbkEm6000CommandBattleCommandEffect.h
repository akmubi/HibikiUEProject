#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000CommandBattleCommandParam.h"
#include "HbkEm6000CommandBattleCommandEffect.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleCommandEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000CommandBattleCommandParam Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinished;
    
    HIBIKI_API FHbkEm6000CommandBattleCommandEffect();
};

