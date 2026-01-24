#pragma once
#include "CoreMinimal.h"
#include "TngDebugBoardDrawDelegate.generated.h"

class UCanvas;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTngDebugBoardDraw, UCanvas*, Canvas);

