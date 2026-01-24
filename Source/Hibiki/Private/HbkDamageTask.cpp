#include "HbkDamageTask.h"

UHbkDamageTask::UHbkDamageTask() {
}

UHbkDamageComponent* UHbkDamageTask::GetDamageComponent() const {
    return NULL;
}

bool UHbkDamageTask::BlueprintNative_Execute_Implementation(AActor* MyActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser, const FHitResult& HitInfo) {
    return false;
}


