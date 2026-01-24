#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkRhythmMeterActionType.h"
#include "HbkRhythmMeterPointRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmMeterPointRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRhythmMeterActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreaseAmount;
    
    HIBIKI_API FHbkRhythmMeterPointRow();
};

