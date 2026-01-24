#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkHideOutExtraChallengeCategory.h"
#include "HbkChallengeMetricsConditions.h"
#include "HbkHideOutChallengeTextReplace.h"
#include "HbkHideOutExtraChallengeRewardInfo.h"
#include "HbkHideOutExtraChallengeParamRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutExtraChallengeParamRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHideOutExtraChallengeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Note;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OpenConditionBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkChallengeMetricsConditions UnlockConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHideOutChallengeTextReplace NameText_Replace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHideOutChallengeTextReplace DescText_Replace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDispConditionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHideOutExtraChallengeRewardInfo Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDispChallengeProgress;
    
    HIBIKI_API FHbkHideOutExtraChallengeParamRow();
};

