#pragma once
#include "CoreMinimal.h"
#include "EHbkEngineDofQuality.h"
#include "HbkGesEngineDOF.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesEngineDOF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideDofQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EHbkEngineDofQuality DofQuality;
    
    HIBIKI_API FHbkGesEngineDOF();
};

