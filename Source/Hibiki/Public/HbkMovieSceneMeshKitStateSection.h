#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "HbkMovieSceneMeshKitStateSectionData.h"
#include "HbkMovieSceneMeshKitStateSection.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkMovieSceneMeshKitStateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMovieSceneMeshKitStateSectionData MeshKitStateData;
    
    UHbkMovieSceneMeshKitStateSection();

};

