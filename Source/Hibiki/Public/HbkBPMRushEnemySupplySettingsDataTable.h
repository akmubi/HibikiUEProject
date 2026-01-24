#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkBPMRushEnemySupplyPhaseData.h"
#include "HbkBPMRushEnemyTypeData.h"
#include "HbkBPMRushEnemySupplySettingsDataTable.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBPMRushEnemySupplySettingsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushEnemyTypeData> TypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushEnemySupplyPhaseData> SupplyPhaseData;
    
    FHbkBPMRushEnemySupplySettingsDataTable();
};

