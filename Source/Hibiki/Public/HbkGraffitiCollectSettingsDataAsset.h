#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkGraffitiCollectTalkEventData.h"
#include "HbkGraffitiCollectSettingsDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkGraffitiCollectSettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGraffitiCollectTalkEventData TalkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UHbkGraffitiCollectSettingsDataAsset();

};

