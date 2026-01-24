#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FaceFXAnimationSectionData.h"
#include "FaceFXAnimationSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceFXAnimationSectionData SectionData;
    
public:
    FACEFX_API FFaceFXAnimationSectionTemplate();
};

