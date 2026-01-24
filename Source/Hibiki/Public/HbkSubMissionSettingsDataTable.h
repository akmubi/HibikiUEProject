#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkSubMissionRewardData.h"
#include "HbkSubMissionSettingsDataTable.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkSubMissionSettingsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckPointCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalProgressSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSubMissionRewardData FirstRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSubMissionRewardData NextRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProgressNoticePopupMessageKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CompleteNoticePopupMessageKey;
    
    FHbkSubMissionSettingsDataTable();
};

