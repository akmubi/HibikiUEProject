#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkSubMissionNoticePopupData.h"
#include "HbkSubMissionSettingsDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkSubMissionSettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSubMissionNoticePopupData NoticePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UHbkSubMissionSettingsDataAsset();

};

