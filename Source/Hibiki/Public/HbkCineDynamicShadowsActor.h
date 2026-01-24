#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkCineDynamicShadowsActor.generated.h"

class UHbkCineDynamicShadowsComponent;

UCLASS(Blueprintable)
class AHbkCineDynamicShadowsActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCineDynamicShadowsComponent* CineDynamicShadowsComponent;
    
public:
    AHbkCineDynamicShadowsActor(const FObjectInitializer& ObjectInitializer);

};

