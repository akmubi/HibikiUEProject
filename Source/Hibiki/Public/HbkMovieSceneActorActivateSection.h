#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MovieSceneSection.h"
#include "HbkMovieSceneActorActivateSection.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkMovieSceneActorActivateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName activateCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DeactivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName deactivateCallSign;
    
public:
    UHbkMovieSceneActorActivateSection();

};

