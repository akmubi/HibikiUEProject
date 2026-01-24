#pragma once
#include "CoreMinimal.h"
#include "HbkPlayingTalkEventSceneInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkPlayingTalkEventSceneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Temp;
    
    FHbkPlayingTalkEventSceneInfo();
};

