#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500CommandBattleCommandParam.h"
#include "HbkEm7500CommandBattleCommandInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500CommandBattleCommandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500CommandBattleCommandParam Command;
    
    HIBIKI_API FHbkEm7500CommandBattleCommandInfo();
};

