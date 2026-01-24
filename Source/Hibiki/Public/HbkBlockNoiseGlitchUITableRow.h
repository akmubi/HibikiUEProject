#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkBlockNoiseGlitchUIData.h"
#include "HbkBlockNoiseGlitchUITableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkBlockNoiseGlitchUITableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBlockNoiseGlitchUIData Data;
    
    HIBIKI_API FHbkBlockNoiseGlitchUITableRow();
};

