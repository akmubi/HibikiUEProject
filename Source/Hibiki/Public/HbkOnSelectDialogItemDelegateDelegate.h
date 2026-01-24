#pragma once
#include "CoreMinimal.h"
#include "HbkOnSelectDialogItemDelegateDelegate.generated.h"

class UHbkDialogItemWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkOnSelectDialogItemDelegate, UHbkDialogItemWidget*, ItemWidget);

