#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000CommandBattleBasicParameter.h"
#include "HbkEm6000CommandBattleCommandList.h"
#include "HbkEm6000CommandBattleParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000CommandBattleBasicParameter Basic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000CommandBattleCommandList> CommandList;
    
    HIBIKI_API FHbkEm6000CommandBattleParameter();
};

