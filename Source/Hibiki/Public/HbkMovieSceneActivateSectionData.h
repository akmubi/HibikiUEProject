#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "HbkActivateKeyData.h"
#include "HbkMovieSceneActivateSectionData.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkMovieSceneActivateSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkActivateKeyData> KeyValues;
    
public:
    FHbkMovieSceneActivateSectionData();
};

