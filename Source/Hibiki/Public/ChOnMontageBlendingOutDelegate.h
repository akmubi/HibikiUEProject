#pragma once
#include "CoreMinimal.h"
#include "ChOnMontageBlendingOutDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChOnMontageBlendingOut, UAnimMontage*, Montage, bool, bInterrupted);

