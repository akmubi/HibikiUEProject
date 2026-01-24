#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EmDamagedDelegate.generated.h"

class AActor;
class AController;
class AHbkEnemyCharacter;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FEmDamaged, AHbkEnemyCharacter*, EnemyPawn, float, Damage, const FGameplayTagContainer&, DamageTags, const UDamageType*, DamageType, const FHitResult&, Hit, const FVector&, DamageImpulse, AController*, InstigatedBy, AActor*, DamageCauser);

