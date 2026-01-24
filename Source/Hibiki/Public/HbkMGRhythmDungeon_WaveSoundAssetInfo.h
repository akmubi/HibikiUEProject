#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmDungeon_WaveSoundAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_WaveSoundAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundAssetName;
    
    HIBIKI_API FHbkMGRhythmDungeon_WaveSoundAssetInfo();
};

