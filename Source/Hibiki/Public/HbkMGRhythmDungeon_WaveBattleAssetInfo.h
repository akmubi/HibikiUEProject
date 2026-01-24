#pragma once
#include "CoreMinimal.h"
#include "HbkBeginBattleParam.h"
#include "HbkMGRhythmDungeon_WaveBattleAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_WaveBattleAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeginBattleParam BeginBattleParam;
    
    HIBIKI_API FHbkMGRhythmDungeon_WaveBattleAssetInfo();
};

