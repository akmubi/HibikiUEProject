#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MeshKitNameAndCurve.h"
#include "HbkMovieSceneMeshKitSection.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkMovieSceneMeshKitSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshKitNameAndCurve> MeshKitNamesAndCurves;
    
public:
    UHbkMovieSceneMeshKitSection();

};

