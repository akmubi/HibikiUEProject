#pragma once
#include "CoreMinimal.h"
#include "EHbkDialogButtonSet.h"
#include "HbkCustomDialogParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkCustomDialogParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDialogButtonSet ButtonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoPause;
    
    HIBIKI_API FHbkCustomDialogParam();
};

