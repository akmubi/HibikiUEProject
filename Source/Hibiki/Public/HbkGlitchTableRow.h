#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkGlitchData.h"
#include "HbkGlitchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkGlitchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGlitchData GlitchData;
    
    HIBIKI_API FHbkGlitchTableRow();
};

