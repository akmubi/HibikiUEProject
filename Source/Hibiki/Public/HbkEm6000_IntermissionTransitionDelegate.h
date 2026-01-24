#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_IntermissionTransitionDelegate.generated.h"

class AActor;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkEm6000_IntermissionTransition, const UObject*, OwnerObject, const AActor*, SelfObject);

