#pragma once
#include "CoreMinimal.h"
#include "HbkOptionControlInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkOptionControlInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonIconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayButtonText;
    
    HIBIKI_API FHbkOptionControlInfo();
};

