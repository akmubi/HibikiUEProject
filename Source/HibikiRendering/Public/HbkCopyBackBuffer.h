#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkRenderTargetForRelease.h"
#include "HbkCopyBackBuffer.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class HIBIKIRENDERING_API UHbkCopyBackBuffer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* UpdateEveryFrameRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* UpdateOnlyThisFrameRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkRenderTargetForRelease> RenderTargetsForRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkRenderTargetForRelease> RenderTargetsForRelease2;
    
public:
    UHbkCopyBackBuffer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdateThisFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdateOnlyThisFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableUpdateOnlyThisFrameRT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetUpdateOnlyThisFrameRT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetUpdateEveryFrameRT() const;
    
};

