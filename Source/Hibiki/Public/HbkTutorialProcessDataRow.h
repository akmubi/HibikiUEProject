#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkTutorialProcessObject.h"
#include "HbkTutorialProcessDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTutorialProcessDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTutorialProcessObject> TutorialPageDataList;
    
    FHbkTutorialProcessDataRow();
};

