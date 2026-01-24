#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkEnemyRhythmDungeonInitParam.h"
#include "HbkEnemySpawnGroupSetRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEnemySpawnGroupSetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyRhythmDungeonInitParam ExtraInitParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EnemyGroupNameList;
    
    FHbkEnemySpawnGroupSetRow();
};

