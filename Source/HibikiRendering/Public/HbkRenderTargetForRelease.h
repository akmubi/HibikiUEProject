#pragma once
#include "CoreMinimal.h"
#include "HbkRenderTargetForRelease.generated.h"

class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FHbkRenderTargetForRelease {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    HIBIKIRENDERING_API FHbkRenderTargetForRelease();
};

