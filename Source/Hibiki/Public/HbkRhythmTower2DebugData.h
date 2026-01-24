#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTower2DebugData.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTower2DebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Challenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 WaveNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName WaveName;
    
    HIBIKI_API FHbkRhythmTower2DebugData();
};

