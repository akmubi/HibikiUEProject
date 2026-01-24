#pragma once
#include "CoreMinimal.h"
#include "HbkStageInfoRow.h"
#include "HbkStageContinueDetailInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkStageContinueDetailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkStageInfoRow StageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SaveDateText;
    
    HIBIKI_API FHbkStageContinueDetailInfo();
};

