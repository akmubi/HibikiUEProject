#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkMusicSyncLinearSpeaker.generated.h"

class UAkMusicSyncLinearComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkMusicSyncLinearSpeaker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkMusicSyncLinearComponent* AkMusicSyncLinearComponent;
    
    AAkMusicSyncLinearSpeaker(const FObjectInitializer& ObjectInitializer);

};

