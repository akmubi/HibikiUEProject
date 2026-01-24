#pragma once
#include "CoreMinimal.h"
#include "HbkSubMissionNoticePopupData.generated.h"

class UStringTable;

USTRUCT(BlueprintType)
struct FHbkSubMissionNoticePopupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* StringTable;
    
    HIBIKI_API FHbkSubMissionNoticePopupData();
};

