#pragma once
#include "CoreMinimal.h"
#include "FHbkGimmick_LevelVisibilityActivateType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_LevelVisibilityFlags.h"
#include "HbkGimmick_LevelVisibilitySettings.h"
#include "HbkGimmick_LevelVisibilitySettingsExtInt.h"
#include "HbkGimmick_LevelVisibility.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_LevelVisibility : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LevelVisibilityFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LevelVisibilitySettings ActivateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LevelVisibilitySettings DeactivateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_LevelVisibilitySettingsExtInt> ActivateExtIntSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_LevelVisibilitySettingsExtInt> DeactivateExtIntSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LevelVisibilityActivateType ActivateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
public:
    AHbkGimmick_LevelVisibility(const FObjectInitializer& ObjectInitializer);

};

