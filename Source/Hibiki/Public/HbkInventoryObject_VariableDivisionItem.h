#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkInventoryObject_VariableItem.h"
#include "HbkInventoryObject_VariableDivisionItem.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkInventoryObject_VariableDivisionItem : public UHbkInventoryObject_VariableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DivisionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CombineInventoryId;
    
    UHbkInventoryObject_VariableDivisionItem();

};

