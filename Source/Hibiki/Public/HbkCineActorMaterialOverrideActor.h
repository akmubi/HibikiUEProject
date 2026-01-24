#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkCineActorMaterialOverrideActor.generated.h"

class UHbkCineToonShadingComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AHbkCineActorMaterialOverrideActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCineToonShadingComponent* CineToonShadingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ActorToOverride;
    
public:
    AHbkCineActorMaterialOverrideActor(const FObjectInitializer& ObjectInitializer);

};

