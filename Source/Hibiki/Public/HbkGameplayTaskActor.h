#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTaskOwnerInterface.h"
#include "HbkGameplayTaskActor.generated.h"

class UHbkGameplayTasksComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGameplayTaskActor : public AActor, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameplayTasksComponent* GTComp;
    
public:
    AHbkGameplayTaskActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

