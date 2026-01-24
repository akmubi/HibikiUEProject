#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "TngDamageSystem.generated.h"

class AActor;
class AController;
class UDamageType;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UTngDamageSystem : public UTngGameSystem {
    GENERATED_BODY()
public:
    UTngDamageSystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyRadialDamageWithFalloffTNG(UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyRadialDamageTNG(UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static float ApplyPointDamageTNG(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static float ApplyDamageTNG(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
};

