#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkCineMovieData.h"
#include "HbkCineMovieDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkCineMovieDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCineMovieData Data;
    
    HIBIKI_API FHbkCineMovieDataTableRow();
};

