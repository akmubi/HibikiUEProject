#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkSoloLightRenderer.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class HIBIKIRENDERING_API UHbkSoloLightRenderer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* AnalyticFogRenderTarget;
    
public:
    UHbkSoloLightRenderer();

};

