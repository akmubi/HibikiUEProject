#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "HbkMovieSceneCineGameEnvSection.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkMovieSceneCineGameEnvSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorLabel;
    
public:
    UHbkMovieSceneCineGameEnvSection();

};

