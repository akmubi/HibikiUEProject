#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "HbkShootingParam.h"
#include "HbkShootingRepParam.h"
#include "ShootingFireDelegateDelegate.h"
#include "ShootingHitTestDelegateDelegate.h"
#include "HbkEnemyShootingComponent.generated.h"

class AActor;
class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyShootingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShootingFireDelegate OnShooting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShootingHitTestDelegate OnHitTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartPositionName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkShootingParam> ShootingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShootingRepParam, meta=(AllowPrivateAccess=true))
    FHbkShootingRepParam ShootingRepParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ObjectHitEffect;
    
public:
    UHbkEnemyShootingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopShooting(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    int32 StartShooting(int32 ShootingParamIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetAbortFlag();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShootingRepParam();
    
    UFUNCTION(BlueprintCallable)
    void OnNextShoot(int32 NoteCount);
    
};

