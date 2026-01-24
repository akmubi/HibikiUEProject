#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkEnemyResetKit.h"
#include "HbkEnemyResetTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnemyResetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyResetKit EnemyResetKit;
    
    HIBIKI_API FHbkEnemyResetTableRow();
};

