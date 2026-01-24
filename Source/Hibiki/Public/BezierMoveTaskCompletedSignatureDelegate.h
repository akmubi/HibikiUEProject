#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "BezierMoveTaskCompletedSignatureDelegate.generated.h"

class AAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBezierMoveTaskCompletedSignature, TEnumAsByte<EPathFollowingResult::Type>, Result, AAIController*, AIController);

