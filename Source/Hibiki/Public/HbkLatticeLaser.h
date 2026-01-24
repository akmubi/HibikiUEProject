#pragma once
#include "CoreMinimal.h"
#include "HbkLatticeLaser.generated.h"

class AHbkEm6000_LatticeLaser;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLatticeLaser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_LatticeLaser> Actor;
    
    FHbkLatticeLaser();
};

