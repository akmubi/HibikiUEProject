#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "HbkMovieSceneActorActivateTemplate.generated.h"

class UHbkMovieSceneActorActivateSection;

USTRUCT(BlueprintType)
struct FHbkMovieSceneActorActivateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkMovieSceneActorActivateSection* Section;
    
public:
    HIBIKI_API FHbkMovieSceneActorActivateTemplate();
};

