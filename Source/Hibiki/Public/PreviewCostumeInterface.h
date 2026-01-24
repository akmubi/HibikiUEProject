#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "PreviewCostumeInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPreviewCostumeInterface : public UInterface {
    GENERATED_BODY()
};

class IPreviewCostumeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPreviewCostume(EHbkCostumePart PartType, const FGameplayTag& LoadCosTag);
    
};

