#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkLightingManagerInstance.generated.h"

class AHbkForwardLightVisibilityVolume;
class UHbkCineToonShadingComponent;
class UHbkFaceShadowComponent;
class UHbkForwardLighting;
class UHbkPostProcessLensFlareComponent;
class UHbkPostProcessLensFlareRenderer;
class UHbkSoloAnalyticFogSpotLightComponent;
class UHbkSoloLightComponent;
class UHbkSoloLightRenderer;
class UHbkSoloLightingVolumeComponent;
class UHbkStaticMeshLensFlareComponent;
class UHbkTKEVToonShadingComponent;
class UHbkTranslucentLightingVolumeComponent;
class UWorld;

UCLASS(Blueprintable, Transient)
class HIBIKI_API UHbkLightingManagerInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkForwardLightVisibilityVolume*> ForwardLightVisibilityVolumesTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkSoloLightComponent*> SoloLightComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkSoloAnalyticFogSpotLightComponent*> SoloAnalyticFogSpotLightComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkSoloLightingVolumeComponent*> SoloLightingVolumeComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSoloLightRenderer* SoloLightRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkTranslucentLightingVolumeComponent*> TranslucentLightingVolumeComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkPostProcessLensFlareComponent*> PostProcessLensFlareComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPostProcessLensFlareRenderer* PostProcessLensFlareRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkStaticMeshLensFlareComponent*> StaticMeshLensFlareComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkCineToonShadingComponent*> CineToonShadingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkTKEVToonShadingComponent*> TKEVToonShadingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkFaceShadowComponent*> FaceShadowComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkForwardLighting* ForwardLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    UHbkLightingManagerInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHbkVisibleForwardLightsString() const;
    
};

