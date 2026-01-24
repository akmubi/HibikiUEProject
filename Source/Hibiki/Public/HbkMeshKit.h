#pragma once
#include "CoreMinimal.h"
#include "HbkMeshKit.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkMeshKit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialSlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultShowing;
    
    FHbkMeshKit();
};

