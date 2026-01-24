#include "TngDamageSystem.h"
#include "Templates/SubclassOf.h"

UTngDamageSystem::UTngDamageSystem() {
}

bool UTngDamageSystem::ApplyRadialDamageWithFalloffTNG(UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
    return false;
}

bool UTngDamageSystem::ApplyRadialDamageTNG(UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
    return false;
}

float UTngDamageSystem::ApplyPointDamageTNG(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
    return 0.0f;
}

float UTngDamageSystem::ApplyDamageTNG(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
    return 0.0f;
}


