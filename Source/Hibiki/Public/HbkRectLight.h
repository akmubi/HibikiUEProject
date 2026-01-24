#pragma once
#include "CoreMinimal.h"
#include "HbkLight.h"
#include "HbkRectLight.generated.h"

class UHbkRectLightComponent;

UCLASS(Blueprintable)
class AHbkRectLight : public AHbkLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRectLightComponent* RectLightComponent;
    
    AHbkRectLight(const FObjectInitializer& ObjectInitializer);

};

