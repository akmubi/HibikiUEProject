#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "CharaPostTakeDamageDelegateDelegate.generated.h"

class AActor;
class AController;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FCharaPostTakeDamageDelegate, float, Damage, const UDamageType*, DamageType, const FHitResult&, Hit, const FVector&, DamageImpulse, AController*, InstigatedBy, AActor*, DamageCauser);

