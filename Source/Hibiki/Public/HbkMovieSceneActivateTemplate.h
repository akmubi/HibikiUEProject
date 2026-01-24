#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "HbkMovieSceneActivateSectionData.h"
#include "HbkMovieSceneActivateTemplate.generated.h"

USTRUCT(BlueprintType)
struct FHbkMovieSceneActivateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMovieSceneActivateSectionData ActivateSectionData;
    
    HIBIKI_API FHbkMovieSceneActivateTemplate();
};

