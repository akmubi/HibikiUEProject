#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkSpectraRoomNextRoundTalk.generated.h"

USTRUCT(BlueprintType)
struct FHbkSpectraRoomNextRoundTalk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf OpenDoorTalkSessionConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf EnteringTalkSessionConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf ClearedBattleTalkSessionConf;
    
    HIBIKI_API FHbkSpectraRoomNextRoundTalk();
};

