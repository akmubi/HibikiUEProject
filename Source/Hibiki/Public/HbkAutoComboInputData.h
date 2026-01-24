#pragma once
#include "CoreMinimal.h"
#include "EHbkAutoComboButtonType.h"
#include "HbkAutoComboInputData.generated.h"

USTRUCT(BlueprintType)
struct FHbkAutoComboInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAutoComboButtonType buttonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoStepTimeCount;
    
    HIBIKI_API FHbkAutoComboInputData();
};

