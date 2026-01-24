#pragma once
#include "CoreMinimal.h"
#include "DynamicObjectInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDynamicObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ObjectActor;
    
    HIBIKI_API FDynamicObjectInfo();
};

