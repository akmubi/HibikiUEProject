#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkInteractItemBase.h"
#include "HbkVLogItem.generated.h"

UCLASS(Blueprintable)
class AHbkVLogItem : public AHbkInteractItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VLogTag;
    
public:
    AHbkVLogItem(const FObjectInitializer& ObjectInitializer);

};

