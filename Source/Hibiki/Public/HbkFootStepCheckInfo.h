#pragma once
#include "CoreMinimal.h"
#include "HbkFootStepCheckInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkFootStepCheckInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    FHbkFootStepCheckInfo();
};

