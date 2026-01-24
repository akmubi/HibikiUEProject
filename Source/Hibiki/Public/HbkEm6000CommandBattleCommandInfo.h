#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000CommandBattleCommandParam.h"
#include "HbkEm6000CommandBattleCommandInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleCommandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIssuedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000CommandBattleCommandParam Command;
    
    HIBIKI_API FHbkEm6000CommandBattleCommandInfo();
};

