#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "HbkTalkTriggerKeyData.h"
#include "HbkMovieSceneTalkTriggerSectionData.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkMovieSceneTalkTriggerSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTalkTriggerKeyData> KeyValues;
    
public:
    FHbkMovieSceneTalkTriggerSectionData();
};

