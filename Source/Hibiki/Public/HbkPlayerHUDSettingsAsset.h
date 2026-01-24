#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkPlayerHUDPresetType.h"
#include "HbkPlayerHUDPresetRow.h"
#include "HbkPlayerHUDSettingsAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayerHUDSettingsAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerHUDPresetType, FHbkPlayerHUDPresetRow> HUDVisibilitiesList;
    
    UHbkPlayerHUDSettingsAsset();

};

