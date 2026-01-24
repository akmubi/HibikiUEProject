#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_LevelVisibilityLevelSettings.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_LevelVisibilityLevelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    HIBIKI_API FHbkGimmick_LevelVisibilityLevelSettings();
};

