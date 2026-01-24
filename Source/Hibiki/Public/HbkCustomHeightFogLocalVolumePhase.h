#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkCustomHeightFogLocalVolumePhase.generated.h"

USTRUCT(BlueprintType)
struct FHbkCustomHeightFogLocalVolumePhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCustomHeightFogTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CustomHeightFogTableRowHandle;
    
    HIBIKI_API FHbkCustomHeightFogLocalVolumePhase();
};

