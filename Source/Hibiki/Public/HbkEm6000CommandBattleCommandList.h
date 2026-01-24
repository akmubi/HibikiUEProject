#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000CommandBattleCommandParam.h"
#include "HbkEm6000CommandBattleCommandList.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleCommandList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000CommandBattleCommandParam> Commands;
    
    HIBIKI_API FHbkEm6000CommandBattleCommandList();
};

