#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "HbkBossSPStagingData.h"
#include "HbkBossSPStagingDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossSPStagingDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossSPStagingData Data;
    
    HIBIKI_API FHbkBossSPStagingDataRow();
};

