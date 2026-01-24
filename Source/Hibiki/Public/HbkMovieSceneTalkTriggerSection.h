#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "HbkMovieSceneTalkTriggerSectionData.h"
#include "HbkMovieSceneTalkTriggerSection.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkMovieSceneTalkTriggerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMovieSceneTalkTriggerSectionData TalkSectionData;
    
    UHbkMovieSceneTalkTriggerSection();

};

