#pragma once
#include "CoreMinimal.h"
#include "DamageActorDiedSignatureDelegate.generated.h"

class AActor;
class AController;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDamageActorDiedSignature, float, Damage, const UDamageType*, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

