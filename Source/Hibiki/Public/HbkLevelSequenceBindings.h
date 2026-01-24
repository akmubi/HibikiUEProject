#pragma once
#include "CoreMinimal.h"
#include "HbkLevelSequenceBindInfo.h"
#include "HbkLevelSequenceBindings.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLevelSequenceBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkLevelSequenceBindInfo> Bindings;
    
    FHbkLevelSequenceBindings();
};

