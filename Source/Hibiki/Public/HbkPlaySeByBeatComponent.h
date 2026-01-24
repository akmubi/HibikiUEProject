#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkPlaySeByBeatComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPlaySeByBeatComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatCount;
    
public:
    UHbkPlaySeByBeatComponent(const FObjectInitializer& ObjectInitializer);

};

