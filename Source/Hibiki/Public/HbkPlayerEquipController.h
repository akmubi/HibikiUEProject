#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "PlayerChipEquipDelegateDelegate.h"
#include "HbkPlayerEquipController.generated.h"

UCLASS(Blueprintable)
class UHbkPlayerEquipController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChipEquipDelegate OnEquipedChip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChipEquipDelegate OnRemovedChip;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultSPAInventoryId;
    
public:
    UHbkPlayerEquipController();

};

