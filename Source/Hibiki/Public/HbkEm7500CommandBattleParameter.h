#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500CommandBattleBasicParameter.h"
#include "HbkEm7500CommandBattleCommandList.h"
#include "HbkEm7500CommandBattleParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500CommandBattleParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500CommandBattleBasicParameter Basic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CommandBattleCommandList> CommandList;
    
    HIBIKI_API FHbkEm7500CommandBattleParameter();
};

