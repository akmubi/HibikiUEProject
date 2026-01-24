#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkMPL.generated.h"

class UAkMPLComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkMPL : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkMPLComponent* AkMPL;
    
    AAkMPL(const FObjectInitializer& ObjectInitializer);

};

