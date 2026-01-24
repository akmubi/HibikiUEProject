#pragma once
#include "CoreMinimal.h"
#include "HbkDecalLight.h"
#include "HbkDecalRectLight.generated.h"

class UHbkDecalRectLightComponent;

UCLASS(Blueprintable)
class AHbkDecalRectLight : public AHbkDecalLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDecalRectLightComponent* RectLightComponent;
    
    AHbkDecalRectLight(const FObjectInitializer& ObjectInitializer);

};

