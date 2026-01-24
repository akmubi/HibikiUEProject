#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "HbkMovieSceneMeshKitStateSectionData.h"
#include "HbkMovieSceneMeshKitStateTemplate.generated.h"

USTRUCT(BlueprintType)
struct FHbkMovieSceneMeshKitStateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMovieSceneMeshKitStateSectionData MeshKitStateSectionData;
    
    HIBIKI_API FHbkMovieSceneMeshKitStateTemplate();
};

