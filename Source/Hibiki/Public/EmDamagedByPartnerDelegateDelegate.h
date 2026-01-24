#pragma once
#include "CoreMinimal.h"
#include "EmDamagedByPartnerDelegateDelegate.generated.h"

class AActor;
class AHbkEnemyCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEmDamagedByPartnerDelegate, AHbkEnemyCharacter*, Victim, AActor*, DamageCauser);

