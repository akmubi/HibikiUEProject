#pragma once
#include "CoreMinimal.h"
#include "HbkSpectraRoomBattleRoomAudioData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkSpectraRoomBattleRoomAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterWhiteoutSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitWhiteoutSE;
    
    FHbkSpectraRoomBattleRoomAudioData();
};

