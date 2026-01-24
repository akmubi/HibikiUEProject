#pragma once
#include "CoreMinimal.h"
#include "HbkGesCapsuleShadow.h"
#include "HbkGesGameSSAO.h"
#include "HbkGesOutline.h"
#include "HbkGesProbeGI.h"
#include "HbkGesShadowData.h"
#include "HbkPostProcessVolumeState.generated.h"

class AHbkAmbientCubemapVolumeTNG;
class AHbkShadowVolumeTNG;

USTRUCT(BlueprintType)
struct FHbkPostProcessVolumeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkShadowVolumeTNG* ShadowVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkShadowVolumeTNG* ShadowVolume2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkShadowVolumeTNG* ShadowVolume3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkShadowVolumeTNG* ShadowVolume4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGesShadowData ShadowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGesGameSSAO GameSSAO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGesCapsuleShadow CapsuleShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGesProbeGI ProbeGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGesOutline Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkAmbientCubemapVolumeTNG* AmbientCubemap;
    
    HIBIKI_API FHbkPostProcessVolumeState();
};

