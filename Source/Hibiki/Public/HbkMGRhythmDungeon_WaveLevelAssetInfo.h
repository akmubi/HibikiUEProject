#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmDungeon_WaveLevelAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_WaveLevelAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelAssetName;
    
    HIBIKI_API FHbkMGRhythmDungeon_WaveLevelAssetInfo();
};

