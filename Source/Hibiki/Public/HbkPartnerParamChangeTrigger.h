#pragma once
#include "CoreMinimal.h"
#include "HbkTriggerBox.h"
#include "HbkPartnerParamChangeTrigger.generated.h"

class UTextRenderComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPartnerParamChangeTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextComp;
    
public:
    AHbkPartnerParamChangeTrigger(const FObjectInitializer& ObjectInitializer);

};

