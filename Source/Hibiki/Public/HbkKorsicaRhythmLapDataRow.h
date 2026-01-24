#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkKorsicaRhythmPatRow.h"
#include "HbkKorsicaRhythmLapDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkKorsicaRhythmLapDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkKorsicaRhythmPatRow> LapList;
    
    FHbkKorsicaRhythmLapDataRow();
};

