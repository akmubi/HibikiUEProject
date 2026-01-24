#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkCandidateVolume.generated.h"

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkCandidateVolume : public AVolume {
    GENERATED_BODY()
public:
    AAkCandidateVolume(const FObjectInitializer& ObjectInitializer);

};

