#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkAm1000_Pigeon.h"
#include "HbkAm1000_Pigeon_SubMission.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable)
class AHbkAm1000_Pigeon_SubMission : public AHbkAm1000_Pigeon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkAm1000_Pigeon*> Pigeons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 SaveType;
    
public:
    AHbkAm1000_Pigeon_SubMission(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartSubMission();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSubMission();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
};

