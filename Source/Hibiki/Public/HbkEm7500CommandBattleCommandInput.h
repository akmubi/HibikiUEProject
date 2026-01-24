#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleResult.h"
#include "HbkEm7500CommandBattleCommandParam.h"
#include "HbkEm7500CommandBattleCommandInput.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500CommandBattleCommandInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500CommandBattleCommandParam Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossCommandBattleResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    HIBIKI_API FHbkEm7500CommandBattleCommandInput();
};

