#pragma once
#include "CoreMinimal.h"
#include "HbkGesTranslucent.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesTranslucent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideUseSeparateTranslucency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUseSeparateTranslucency;
    
    HIBIKI_API FHbkGesTranslucent();
};

