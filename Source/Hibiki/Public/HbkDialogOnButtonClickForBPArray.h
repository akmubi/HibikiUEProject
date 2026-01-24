#pragma once
#include "CoreMinimal.h"
#include "HbkDialogOnButtonClickDelegate.h"
#include "HbkDialogOnButtonClickForBPArray.generated.h"

USTRUCT(BlueprintType)
struct FHbkDialogOnButtonClickForBPArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialogOnButtonClick Delegate;
    
    HIBIKI_API FHbkDialogOnButtonClickForBPArray();
};

