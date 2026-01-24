#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "HbkMovieSceneActivateSectionData.h"
#include "HbkMovieSceneActivateSection.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkMovieSceneActivateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMovieSceneActivateSectionData ActivateData;
    
    UHbkMovieSceneActivateSection();

};

