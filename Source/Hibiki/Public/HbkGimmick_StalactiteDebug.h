#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_StalactiteDebug.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_StalactiteDebug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FallMeshName;
    
    HIBIKI_API FHbkGimmick_StalactiteDebug();
};

