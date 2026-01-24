#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkKorsicaLastQTEComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkKorsicaLastQTEComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KorsicaQTESuccessSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KorsicaQTEFailedSE;
    
    UHbkKorsicaLastQTEComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnSuccessQTE(bool bPerfect);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnFailedQTE();
    
};

