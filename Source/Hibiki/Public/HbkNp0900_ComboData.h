#pragma once
#include "CoreMinimal.h"
#include "EHbkComboType.h"
#include "HbkNp0900_ComboData.generated.h"

USTRUCT(BlueprintType)
struct FHbkNp0900_ComboData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkComboType TargetComboType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FailedTalkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlowDelayTimeCountOnComboSuccess;
    
    HIBIKI_API FHbkNp0900_ComboData();
};

