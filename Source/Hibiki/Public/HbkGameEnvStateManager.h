#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameEnvStateBlendParam.h"
#include "HbkGameEnvStateManager.generated.h"

class UHbkARPostStateManager;
class UHbkGameEnvDataManager;
class UHbkGameEnvState;
class UHbkGamePostStateManager;
class UHbkGlitchStateManager;
class UHbkHitImpactStateManager;
class UHbkHologramCharaPostStateManager;
class UHbkHologramPostStateManager;
class UHbkInterferenceCRTStateManagerPatch;
class UHbkOcclusionOutlinesStateManager;
class UHbkPixelateStateManager;
class UHbkPostProcessMaterials;
class UHbkRadialBlurStateManager;
class UHbkSoloLightingStateManager;
class UHbkToonMaskingStateManager;
class UHbkToonMotionBlurAfterImageStateManager;

UCLASS(Blueprintable, Transient)
class UHbkGameEnvStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPostProcessMaterials* PostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMaskingStateManager* ToonMaskingStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkOcclusionOutlinesStateManager* OcclusionOutlinesStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMotionBlurAfterImageStateManager* ToonMotionBlurAfterImageStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkARPostStateManager* ARPostStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGlitchStateManager* GlitchStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPixelateStateManager* PixelateStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHitImpactStateManager* HitImpactStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramPostStateManager* HologramPostStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramCharaPostStateManager* HologramCharaPostStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramCharaPostStateManager* HologramCharaPostStateManager2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramCharaPostStateManager* HologramCharaPostStateManager3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSoloLightingStateManager* SoloLightingStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkRadialBlurStateManager* RadialBlurStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGamePostStateManager* GamePostStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvDataManager* DataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvState* GameEnvState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvState* ActiveGameEnvState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGameEnvStateBlendParam BlendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkInterferenceCRTStateManagerPatch* InterferenceCRTStateManagerPatch;
    
public:
    UHbkGameEnvStateManager();

    UFUNCTION(BlueprintCallable)
    void SetDisableOcclusionOutlinesDrawing(const bool B);
    
};

