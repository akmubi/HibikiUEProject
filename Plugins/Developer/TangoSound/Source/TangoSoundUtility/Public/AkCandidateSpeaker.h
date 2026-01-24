#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkCandidateSpeaker.generated.h"

class UAkCandidateComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkCandidateSpeaker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkCandidateComponent* AkCandidateComponent;
    
    AAkCandidateSpeaker(const FObjectInitializer& ObjectInitializer);

};

