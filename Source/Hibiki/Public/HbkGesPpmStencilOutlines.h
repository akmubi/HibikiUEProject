#pragma once
#include "CoreMinimal.h"
#include "HbkGesPpmStencilOutlines.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesPpmStencilOutlines {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideStencilOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bStencilOutlines;
    
    HIBIKI_API FHbkGesPpmStencilOutlines();
};

