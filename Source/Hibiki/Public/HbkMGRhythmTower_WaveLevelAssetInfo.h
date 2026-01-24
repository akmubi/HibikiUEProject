#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_WaveLevelAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_WaveLevelAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoFadeInAfterLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelAssetName;
    
    HIBIKI_API FHbkMGRhythmTower_WaveLevelAssetInfo();
};

