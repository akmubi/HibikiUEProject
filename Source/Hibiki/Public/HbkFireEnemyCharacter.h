#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EnemyBurningInterface.h"
#include "HbkEnemyCharacter.h"
#include "HbkFireEnemyCharacter.generated.h"

class AActor;
class AController;
class UDamageType;
class UHbkEnemyBurningComponent;

UCLASS(Blueprintable)
class AHbkFireEnemyCharacter : public AHbkEnemyCharacter, public IEnemyBurningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEnemyBurningComponent* HbkEmBurningComp;
    
public:
    AHbkFireEnemyCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEnabledBurning();
    
    UFUNCTION(BlueprintCallable)
    void OnDisabledBurning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostTakeKorsicaDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    

    // Fix for true pure virtual functions not being implemented
};

