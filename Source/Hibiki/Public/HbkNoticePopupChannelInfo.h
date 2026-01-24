#pragma once
#include "CoreMinimal.h"
#include "EHbkNoticePopupChannel.h"
#include "HbkNoticePopupRequestParam_FoundGraffiti.h"
#include "HbkNoticePopupRequestParam_GeneralMsg.h"
#include "HbkNoticePopupRequestParam_HideOutChallenge.h"
#include "HbkNoticePopupRequestParam_ItemGet.h"
#include "HbkNoticePopupRequestParam_Submission.h"
#include "HbkNoticePopupChannelInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkNoticePopupChannelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkNoticePopupChannel ChannelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FHbkNoticePopupRequestParam_GeneralMsg> RequestQueue_GeneralMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FHbkNoticePopupRequestParam_Submission> RequestQueue_Submission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FHbkNoticePopupRequestParam_FoundGraffiti> RequestQueue_FoundGraffiti;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FHbkNoticePopupRequestParam_ItemGet> RequestQueue_ItemGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FHbkNoticePopupRequestParam_HideOutChallenge> RequestQueue_HideOutChallenge;
    
    HIBIKI_API FHbkNoticePopupChannelInfo();
};

