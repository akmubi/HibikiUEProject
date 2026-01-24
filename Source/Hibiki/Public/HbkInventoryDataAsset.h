#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "HbkInventoryDataAsset.generated.h"

class UHbkInventoryObject;

UCLASS(Blueprintable)
class UHbkInventoryDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UHbkInventoryObject>> InventoryMap;
    
    UHbkInventoryDataAsset();

};

