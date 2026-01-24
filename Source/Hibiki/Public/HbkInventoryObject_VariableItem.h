#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryVariableItemCategory.h"
#include "HbkInventoryObject.h"
#include "HbkInventoryObject_VariableItem.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkInventoryObject_VariableItem : public UHbkInventoryObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkInventoryVariableItemCategory VariableItemCategory;
    
    UHbkInventoryObject_VariableItem();

};

