#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "HbkLevelSequenceBindInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLevelSequenceBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID BindingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    FHbkLevelSequenceBindInfo();
};

