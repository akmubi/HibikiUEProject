#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "HbkMovieSceneTalkTriggerSectionData.h"
#include "HbkMovieSceneTalkTriggerTemplate.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FHbkMovieSceneTalkTriggerTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMovieSceneTalkTriggerSectionData TalkSectionData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
public:
    HIBIKI_API FHbkMovieSceneTalkTriggerTemplate();
};

