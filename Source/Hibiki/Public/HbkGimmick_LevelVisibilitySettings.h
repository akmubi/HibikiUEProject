#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_LevelVisibilityLevelSettings.h"
#include "HbkGimmick_LevelVisibilitySettings.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_LevelVisibilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_LevelVisibilityLevelSettings> ShowLevelSettingsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_LevelVisibilityLevelSettings> HideLevelSettingsList;
    
    HIBIKI_API FHbkGimmick_LevelVisibilitySettings();
};

