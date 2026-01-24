#pragma once
#include "CoreMinimal.h"
#include "HbkAutoComboBaseParam.h"
#include "HbkAutoComboUseParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkAutoComboUseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAutoComboBaseParam Data;
    
    HIBIKI_API FHbkAutoComboUseParam();
};

