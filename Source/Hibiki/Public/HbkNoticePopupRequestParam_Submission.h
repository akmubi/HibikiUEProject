#pragma once
#include "CoreMinimal.h"
#include "HbkNoticePopupRequestParam.h"
#include "HbkNoticePopupRequestParam_Submission.generated.h"

USTRUCT(BlueprintType)
struct FHbkNoticePopupRequestParam_Submission : public FHbkNoticePopupRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ClearedMissionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxMissionNum;
    
    HIBIKI_API FHbkNoticePopupRequestParam_Submission();
};

