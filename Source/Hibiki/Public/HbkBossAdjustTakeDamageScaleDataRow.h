#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkBossAdjustTakeDamageScaleInfo.h"
#include "HbkBossAdjustTakeDamageScaleDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossAdjustTakeDamageScaleDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossAdjustTakeDamageScaleInfo DamageScaleInfo;
    
    HIBIKI_API FHbkBossAdjustTakeDamageScaleDataRow();
};

