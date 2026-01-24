#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ActorActivateInterface.h"
#include "EHbkNp0030_Drone_SaveType.h"
#include "HbkNp0030_DestroyInfo_t.h"
#include "HbkNpcCharacter.h"
#include "HbkNp0030_Drone.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UAkComponent;
class UDamageType;
class UParticleSystem;
class UTexture;

UCLASS(Blueprintable)
class AHbkNp0030_Drone : public AHbkNpcCharacter, public IActorActivateInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkNp0030_MovieScreenStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkNp0030_MovieScreenEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkNp0030_Move);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkNp0030_Destroy);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> RotationTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TargetPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0030_DestroyInfo_t DestroyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkNp0030_Drone_SaveType bSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> HitVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pHitVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> LoopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pLoopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pStopSFX;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0030_MovieScreenStart OnMovieStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0030_MovieScreenEnd OnMovieEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0030_MovieScreenEnd OnMovieClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0030_Move OnMoveStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0030_Move OnMoveEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0030_Destroy OnDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* pLoopAk;
    
public:
    AHbkNp0030_Drone(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SplineMoveStart();
    
    UFUNCTION(BlueprintCallable)
    void SplineMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetCollision(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void Np0030_Destroy();
    
    UFUNCTION(BlueprintCallable)
    void MovieStartFunc(UTexture* NewMediaTexture);
    
    UFUNCTION(BlueprintCallable)
    void MovieEndFunc();
    
    UFUNCTION(BlueprintCallable)
    void MovieCloseFunc();
    
    UFUNCTION(BlueprintCallable)
    FVector GetMoveDir();
    

    // Fix for true pure virtual functions not being implemented
};

