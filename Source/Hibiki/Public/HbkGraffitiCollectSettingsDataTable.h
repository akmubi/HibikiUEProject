#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkGraffitiCollectSettingsDataTable.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGraffitiCollectSettingsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoundGameFlagItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
    FHbkGraffitiCollectSettingsDataTable();
};

