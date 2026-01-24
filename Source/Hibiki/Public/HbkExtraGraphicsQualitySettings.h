#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkQualityPresetAntiAliasing.h"
#include "HbkQualityPresetDLSS.h"
#include "HbkQualityPresetDepthOfField.h"
#include "HbkQualityPresetDynamicShadowMaps.h"
#include "HbkQualityPresetFSR1.h"
#include "HbkQualityPresetFSR2.h"
#include "HbkQualityPresetFoliage.h"
#include "HbkQualityPresetGPUPhysicsSimulation.h"
#include "HbkQualityPresetGraphicsPreset.h"
#include "HbkQualityPresetMotionBlur.h"
#include "HbkQualityPresetNVIDIAReflex.h"
#include "HbkQualityPresetSSAO.h"
#include "HbkQualityPresetTAA.h"
#include "HbkQualityPresetTSR.h"
#include "HbkQualityPresetTexture.h"
#include "HbkQualityPresetXeSS.h"
#include "HbkExtraGraphicsQualitySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=GameUserSettings)
class UHbkExtraGraphicsQualitySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetMotionBlur> MotionBlurPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetDynamicShadowMaps> DynamicShadowMapsPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetTexture> TexturePresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetFoliage> FoliagePresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetSSAO> SSAOPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetDepthOfField> DepthOfFieldPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetAntiAliasing> AntiAliasingPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetGPUPhysicsSimulation> GPUPhysicsSimulationPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetGraphicsPreset> GraphicsPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkQualityPresetTAA TAAPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetDLSS> DLSSPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetFSR1> FSR1Presets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetFSR2> FSR2Presets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetXeSS> XeSSPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetTSR> TSRPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkQualityPresetNVIDIAReflex> NVIDIAReflexPresets;
    
    UHbkExtraGraphicsQualitySettings();

};

