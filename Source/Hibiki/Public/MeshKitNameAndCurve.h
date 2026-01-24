#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "MeshKitNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct FMeshKitNameAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshKitName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel BoolCurve;
    
    HIBIKI_API FMeshKitNameAndCurve();
};

