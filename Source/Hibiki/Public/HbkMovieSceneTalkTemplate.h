#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "HbkMovieSceneTalkTemplate.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FHbkMovieSceneTalkTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalktRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionRangeStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionRangeEndFrame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
public:
    HIBIKI_API FHbkMovieSceneTalkTemplate();
};

