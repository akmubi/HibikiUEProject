#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MeshKitNameAndCurve.h"
#include "HbkMovieSceneMeshKitTemplate.generated.h"

USTRUCT(BlueprintType)
struct FHbkMovieSceneMeshKitTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshKitNameAndCurve> MeshKitStates;
    
public:
    HIBIKI_API FHbkMovieSceneMeshKitTemplate();
};

