#pragma once
#include "CoreMinimal.h"
#include "EHbkHideOutChallengeCategory.h"
#include "HbkNoticePopupRequestParam.h"
#include "HbkNoticePopupRequestParam_HideOutChallenge.generated.h"

USTRUCT(BlueprintType)
struct FHbkNoticePopupRequestParam_HideOutChallenge : public FHbkNoticePopupRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NowNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TargetNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkHideOutChallengeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsDispConditionText;
    
    HIBIKI_API FHbkNoticePopupRequestParam_HideOutChallenge();
};

