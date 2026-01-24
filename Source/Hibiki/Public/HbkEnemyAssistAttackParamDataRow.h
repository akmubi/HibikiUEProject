#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkEnemyAssistAttackParam.h"
#include "HbkEnemyAssistAttackParamDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEnemyAssistAttackParamDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyAssistAttackParam> AssistAttackParamList;
    
    FHbkEnemyAssistAttackParamDataRow();
};

