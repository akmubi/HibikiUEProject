#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkEVTutorial_ChangeAssetInfo_t.h"
#include "HbkEVTutorial_ChangeAssetKindRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEVTutorial_ChangeAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEVTutorial_ChangeAssetInfo_t DefaultInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEVTutorial_ChangeAssetInfo_t PerfectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEVTutorial_ChangeAssetInfo_t GoodInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEVTutorial_ChangeAssetInfo_t MissInfo;
    
    HIBIKI_API FHbkEVTutorial_ChangeAssetKindRow();
};

