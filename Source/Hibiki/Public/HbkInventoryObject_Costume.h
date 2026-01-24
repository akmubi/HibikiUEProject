#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "EHbkPartnerType.h"
#include "HbkInventoryObject_PlayerItem.h"
#include "HbkInventoryObject_Costume.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkInventoryObject_Costume : public UHbkInventoryObject_PlayerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetItemInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnly1stCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnly2ndCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType WearCharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumePart CostumePartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkCostumePart> ExcludeCostumeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SubInventoryIds;
    
    UHbkInventoryObject_Costume();

};

