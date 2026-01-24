#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkCameraFadeDitherAlpha.generated.h"

USTRUCT(BlueprintType)
struct FHbkCameraFadeDitherAlpha {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PSETableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PSEVFXTableRowHandle;
    
    HIBIKI_API FHbkCameraFadeDitherAlpha();
};

