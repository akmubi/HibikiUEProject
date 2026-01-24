#pragma once
#include "CoreMinimal.h"
#include "HbkForwardLight.h"
#include "HbkForwardRectLight.generated.h"

class UHbkForwardRectLightComponent;

UCLASS(Blueprintable)
class AHbkForwardRectLight : public AHbkForwardLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkForwardRectLightComponent* RectLightComponent;
    
    AHbkForwardRectLight(const FObjectInitializer& ObjectInitializer);

};

