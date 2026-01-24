#pragma once
#include "CoreMinimal.h"
#include "HbkNoticePopupRequestParam.h"
#include "HbkNoticePopupRequestParam_GeneralMsg.generated.h"

USTRUCT(BlueprintType)
struct FHbkNoticePopupRequestParam_GeneralMsg : public FHbkNoticePopupRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText Text;
    
    HIBIKI_API FHbkNoticePopupRequestParam_GeneralMsg();
};

