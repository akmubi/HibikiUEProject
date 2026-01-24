#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkUIMaterialPatch.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FHbkUIMaterialPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* BlockNoiseGlitchUIMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BlockNoiseGlitchUITableRowHandle;
    
    HIBIKI_API FHbkUIMaterialPatch();
};

