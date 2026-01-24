#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "HbkMeshKitStateKeyData.h"
#include "HbkMovieSceneMeshKitStateSectionData.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkMovieSceneMeshKitStateSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMeshKitStateKeyData> KeyValues;
    
public:
    FHbkMovieSceneMeshKitStateSectionData();
};

