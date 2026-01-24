#pragma once
#include "CoreMinimal.h"
#include "SBFMirrorBallEndDelegateDelegate.generated.h"

class AHbkEm5000_SBFMirrorBall;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBFMirrorBallEndDelegate, AHbkEm5000_SBFMirrorBall*, MirrorBall);

