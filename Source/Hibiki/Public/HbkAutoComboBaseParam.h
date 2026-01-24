#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkAutoComboAdditiveHPCondition.h"
#include "HbkAutoComboAdditiveRangeCondition.h"
#include "HbkAutoComboInputData.h"
#include "HbkAutoComboBaseParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkAutoComboBaseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NeedSkillTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkAutoComboInputData> InputDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirJamCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePerformJamCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkAutoComboAdditiveRangeCondition> AdditiveRangeConditionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAutoComboAdditiveHPCondition AdditiveHPCondition;
    
    HIBIKI_API FHbkAutoComboBaseParam();
};

