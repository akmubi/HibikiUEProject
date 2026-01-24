#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkEnginePostProcessVolumeColorGradingDataPatch.h"
#include "HbkEnginePostProcessVolumeColorGradingPatchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnginePostProcessVolumeColorGradingPatchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnginePostProcessVolumeColorGradingDataPatch Data;
    
    HIBIKI_API FHbkEnginePostProcessVolumeColorGradingPatchTableRow();
};

