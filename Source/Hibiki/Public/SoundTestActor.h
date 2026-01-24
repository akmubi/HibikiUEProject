#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoundTestActor.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class HIBIKI_API ASoundTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    ASoundTestActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAssociatedAkEvent();
    
};

