#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "HbkMovieSceneTalkSection.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkMovieSceneTalkSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalktRowName;
    
    UHbkMovieSceneTalkSection();

};

