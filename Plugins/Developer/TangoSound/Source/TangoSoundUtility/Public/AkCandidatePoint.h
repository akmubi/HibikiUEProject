#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkCandidatePoint.generated.h"

class UAkCandidatePointComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkCandidatePoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkCandidatePointComponent* AkCandidatePointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Speaker;
    
    AAkCandidatePoint(const FObjectInitializer& ObjectInitializer);

};

