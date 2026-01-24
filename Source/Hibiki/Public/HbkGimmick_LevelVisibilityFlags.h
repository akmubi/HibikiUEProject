#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_LevelVisibilityFlags.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_LevelVisibilityFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultDeactivate;
    
    HIBIKI_API FHbkGimmick_LevelVisibilityFlags();
};

