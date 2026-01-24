#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkMobActor.h"
#include "HbkNp0020_CarryInfo_t.h"
#include "Templates/SubclassOf.h"
#include "HbkNp0020_Drone.generated.h"

class AActor;
class AController;
class AHbkGimmick_DroneCargo;
class UAkAudioEvent;
class UAkComponent;
class UDamageType;
class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkNp0020_Drone : public AHbkMobActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_DroneCargo> CarryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkNp0020_CarryInfo_t> carryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> DestroyVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pDestroyVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> DestroySFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pDestroySFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> LoopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pLoopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pStopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* pLoopAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SaveState;
    
public:
    AHbkNp0020_Drone(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartSubMission();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPostStartPlay();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndSubMission();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
};

