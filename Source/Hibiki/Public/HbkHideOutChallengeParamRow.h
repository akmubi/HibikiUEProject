#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkHideOutChallengeCategory.h"
#include "HbkChallengeMetricsConditions.h"
#include "HbkHideOutChallengeRewardInfo.h"
#include "HbkHideOutChallengeTextReplace.h"
#include "HbkHideOutChallengeParamRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutChallengeParamRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHideOutChallengeCategory Category;
    
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
    FHbkHideOutChallengeRewardInfo Reward;
    
    HIBIKI_API FHbkHideOutChallengeParamRow();
};

