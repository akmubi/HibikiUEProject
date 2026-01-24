#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkTriggerBox.h"
#include "HbkTeleportTriggerBox.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkTeleportTriggerBox : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TeleportTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TeleportCallSign;
    
public:
    AHbkTeleportTriggerBox(const FObjectInitializer& ObjectInitializer);

};

