#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkInterferenceCRTDataPatch.h"
#include "HbkInterferenceCRTPatchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkInterferenceCRTPatchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInterferenceCRTDataPatch CRTData;
    
    HIBIKI_API FHbkInterferenceCRTPatchTableRow();
};

