#pragma once
#include "CoreMinimal.h"
#include "HbkDebugJumpOption.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkDebugJumpOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DummyCheckPointHistory;
    
    FHbkDebugJumpOption();
};

