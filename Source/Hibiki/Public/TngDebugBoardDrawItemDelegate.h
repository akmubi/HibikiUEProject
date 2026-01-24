#pragma once
#include "CoreMinimal.h"
#include "TngDebugBoardDrawItemDelegate.generated.h"

class UCanvas;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FTngDebugBoardDrawItem, UCanvas*, Canvas);

