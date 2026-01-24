#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkRenderTargetForRelease.h"
#include "HbkPhotoModeRenderer.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class HIBIKIRENDERING_API UHbkPhotoModeRenderer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* TempRT1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* TempRT2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* GradientRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* OutlineRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkRenderTargetForRelease> RenderTargetsForRelease;
    
public:
    UHbkPhotoModeRenderer();

};

