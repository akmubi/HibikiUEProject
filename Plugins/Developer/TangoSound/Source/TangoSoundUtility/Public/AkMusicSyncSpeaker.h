#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkMusicSyncSpeaker.generated.h"

class UAkMusicSyncComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkMusicSyncSpeaker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkMusicSyncComponent* AkMusicSyncComponent;
    
    AAkMusicSyncSpeaker(const FObjectInitializer& ObjectInitializer);

};

