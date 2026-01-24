#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "HbkMovieSceneGlobalCineLightingSection.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkMovieSceneGlobalCineLightingSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorLabel;
    
public:
    UHbkMovieSceneGlobalCineLightingSection();

};

