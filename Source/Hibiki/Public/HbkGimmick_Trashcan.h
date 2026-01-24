#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_Trashcan.generated.h"

class AActor;
class UAkAudioEvent;
class UParticleSystem;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkGimmick_Trashcan : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FallingSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallingSeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* VfxRef;
    
public:
    AHbkGimmick_Trashcan(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStaticMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

