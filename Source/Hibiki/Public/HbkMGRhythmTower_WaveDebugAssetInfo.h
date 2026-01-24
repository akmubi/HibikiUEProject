#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_WaveDebugAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_WaveDebugAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDefaultTime;
    
    HIBIKI_API FHbkMGRhythmTower_WaveDebugAssetInfo();
};

