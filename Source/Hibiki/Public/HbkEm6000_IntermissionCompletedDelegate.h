#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_IntermissionCompletedDelegate.generated.h"

class AActor;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkEm6000_IntermissionCompleted, const UObject*, OwnerObject, const AActor*, SelfObject);

