#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkHitImpactData.h"
#include "HbkHitImpactTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkHitImpactTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHitImpactData HitImpactData;
    
    HIBIKI_API FHbkHitImpactTableRow();
};

