#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "HbkAttackHitShapeInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkEnemyBeamAttackComponent.generated.h"

class UDamageType;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyBeamAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> BeamParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShape;
    
public:
    UHbkEnemyBeamAttackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetPoint(FVector NewTargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetSourcePoint(FVector NewSourcePoint);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideDamageType(TSubclassOf<UDamageType> NewDamageType);
    
    UFUNCTION(BlueprintCallable)
    void AttackUpdate();
    
    UFUNCTION(BlueprintCallable)
    void AttackEnd();
    
    UFUNCTION(BlueprintCallable)
    void AttackBegin();
    
};

