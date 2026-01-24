#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TngSoundMusicManagerTestActor.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API ATngSoundMusicManagerTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    ATngSoundMusicManagerTestActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAssociatedAkEvent();
    
};

