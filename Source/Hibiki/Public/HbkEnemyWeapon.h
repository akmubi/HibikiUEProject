#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EWeaponDelegateDelegate.h"
#include "HbkWeapon.h"
#include "HbkEnemyWeapon.generated.h"

class AActor;
class AController;
class UDamageType;
class UHbkDamageComponent;
class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyWeapon : public AHbkWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEWeaponDelegate OnBreakWeapon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* HbkDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* HbkSkeletalMesh;
    
public:
    AHbkEnemyWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaxHealth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthBecomedZero();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDurableZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBreak() const;
    
    UFUNCTION(BlueprintCallable)
    UHbkSkeletalMeshComponent* GetSkeletalMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkDamageComponent* GetDamageComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceBreak();
    
};

