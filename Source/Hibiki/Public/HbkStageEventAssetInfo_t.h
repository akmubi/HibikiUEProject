#pragma once
#include "CoreMinimal.h"
#include "HbkStageEventAssetInfo_t.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkStageEventAssetInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    FHbkStageEventAssetInfo_t();
};

