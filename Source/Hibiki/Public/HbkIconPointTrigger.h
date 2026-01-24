#pragma once
#include "CoreMinimal.h"
#include "HbkTriggerBox.h"
#include "HbkIconPointTrigger.generated.h"

class UTextRenderComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkIconPointTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleDistance;
    
public:
    AHbkIconPointTrigger(const FObjectInitializer& ObjectInitializer);

};

