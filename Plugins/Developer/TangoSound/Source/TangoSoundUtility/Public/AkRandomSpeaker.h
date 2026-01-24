#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkRandomSpeaker.generated.h"

class AAkCandidatePoint;
class UAkRandomComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkRandomSpeaker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRandomComponent* AkRandomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAkCandidatePoint*> Points;
    
    AAkRandomSpeaker(const FObjectInitializer& ObjectInitializer);

};

