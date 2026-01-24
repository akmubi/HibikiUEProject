#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_PauseResumeAnimDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkGimmickBase_PauseResumeAnimDelegate, AActor*, Activator, bool, Immidiate);

