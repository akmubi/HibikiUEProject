#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_LevelVisibilitySettings.h"
#include "HbkGimmick_LevelVisibilitySettingsExtInt.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_LevelVisibilitySettingsExtInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LevelVisibilitySettings Settings;
    
    HIBIKI_API FHbkGimmick_LevelVisibilitySettingsExtInt();
};

