#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ActorActivateInterface.h"
#include "Tutorial_ST01ReverbGaugeDelegateDelegate.h"
#include "HbkTutorial_ST01ReverbGauge.generated.h"

class UBoxComponent;
class UHbkStaticMeshComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkTutorial_ST01ReverbGauge : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorial_ST01ReverbGaugeDelegate OnBeginTakeReverbGauge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorial_ST01ReverbGaugeDelegate OnEndTakeReverbGauge;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* PlayerStandingPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopNoteCount;
    
public:
    AHbkTutorial_ST01ReverbGauge(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteCount(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedAnim(bool bInterrupted);
    

    // Fix for true pure virtual functions not being implemented
};

