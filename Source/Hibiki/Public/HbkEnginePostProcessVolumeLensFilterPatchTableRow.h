#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkEnginePostProcessVolumeLensFilterDataPatch.h"
#include "HbkEnginePostProcessVolumeLensFilterPatchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnginePostProcessVolumeLensFilterPatchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnginePostProcessVolumeLensFilterDataPatch Data;
    
    HIBIKI_API FHbkEnginePostProcessVolumeLensFilterPatchTableRow();
};

