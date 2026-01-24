#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryPlayerItemCategory.h"
#include "HbkInventoryObject.h"
#include "HbkInventoryObject_PlayerItem.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkInventoryObject_PlayerItem : public UHbkInventoryObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkInventoryPlayerItemCategory PlayerItemCategory;
    
    UHbkInventoryObject_PlayerItem();

};

