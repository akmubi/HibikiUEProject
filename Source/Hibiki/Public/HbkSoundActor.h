#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkSoundActor.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkSoundActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AkAudioList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> PlayingIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TestIdentifier;
    
public:
    AHbkSoundActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestStop();
    
    UFUNCTION(BlueprintCallable)
    void TestPostAkEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void Stop(FName Identifier);
    
    UFUNCTION(BlueprintCallable)
    bool PostAkEvent(FName Identifier);
    
};

