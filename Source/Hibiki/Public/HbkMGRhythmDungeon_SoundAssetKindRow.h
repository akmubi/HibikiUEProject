#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMGRhythmDungeon_SoundAssetKindRow.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_SoundAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RegisterMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MainBGMState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ProgressState;
    
    HIBIKI_API FHbkMGRhythmDungeon_SoundAssetKindRow();
};

