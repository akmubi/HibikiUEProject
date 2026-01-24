#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_ReturnCheckPointDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkGimmickBase_ReturnCheckPointDelegate, AActor*, Activator, FName, CPName);

