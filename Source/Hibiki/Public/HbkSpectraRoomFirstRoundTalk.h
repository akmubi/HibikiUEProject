#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkSpectraRoomFirstRoundTalk.generated.h"

USTRUCT(BlueprintType)
struct FHbkSpectraRoomFirstRoundTalk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf FoundDoorPeppermintTalkSessionConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf FoundDoorMacaronTalkSessionConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf FoundDoorCinnamonTalkSessionConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf FoundDoorKorsicaTalkSessionConf;
    
    HIBIKI_API FHbkSpectraRoomFirstRoundTalk();
};

