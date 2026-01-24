#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "HbkMovieSceneCineGameEnvTemplate.generated.h"

USTRUCT(BlueprintType)
struct FHbkMovieSceneCineGameEnvTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionRangeStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionRangeEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSectionRangeUnbound;
    
public:
    HIBIKI_API FHbkMovieSceneCineGameEnvTemplate();
};

