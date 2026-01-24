#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_WaveSoundAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_WaveSoundAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundAssetName;
    
    HIBIKI_API FHbkMGRhythmTower_WaveSoundAssetInfo();
};

