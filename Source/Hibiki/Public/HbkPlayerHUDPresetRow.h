#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/SlateWrapperTypes.h"
#include "EHbkPlayerHUDWidgetType.h"
#include "HbkPlayerHUDPresetRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkPlayerHUDPresetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerHUDWidgetType, ESlateVisibility> HUDVisibilitiesList;
    
    FHbkPlayerHUDPresetRow();
};

