#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkRenderTargetForRelease.h"
#include "HbkPostProcessLensFlareRenderer.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class HIBIKIRENDERING_API UHbkPostProcessLensFlareRenderer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* LensFlaresRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* OcclusionQuadRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkRenderTargetForRelease> RenderTargetsForRelease;
    
public:
    UHbkPostProcessLensFlareRenderer();

};

