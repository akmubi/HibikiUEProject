#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HbkVLogConfirmDataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkVLogConfirmDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SortIDList;
    
    UHbkVLogConfirmDataAsset();

};

