#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkKaleShotFourCombiGroup.h"
#include "HbkKaleShotFourCombiRhythmDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkKaleShotFourCombiRhythmDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkKaleShotFourCombiGroup Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RhythmFromBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _Comment;
    
    HIBIKI_API FHbkKaleShotFourCombiRhythmDataRow();
};

