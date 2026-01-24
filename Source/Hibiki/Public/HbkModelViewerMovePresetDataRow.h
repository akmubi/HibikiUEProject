#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkModelViewerModelControlMoveInfo.h"
#include "HbkModelViewerMovePresetDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkModelViewerMovePresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkModelViewerModelControlMoveInfo MoveInfo;
    
    FHbkModelViewerMovePresetDataRow();
};

