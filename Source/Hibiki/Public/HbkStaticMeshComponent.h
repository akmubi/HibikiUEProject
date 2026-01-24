#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EHbkDynamicShadowMapType.h"
#include "EHbkEnvHighlightFadeType.h"
#include "EHbkEnvShadowType.h"
#include "EHbkForwardLightType.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "EHbkHologramPostActivateGroup.h"
#include "EHbkTranslucentLayer.h"
#include "HbkPrimitiveComponentInterface.h"
#include "HbkStaticMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkStaticMeshComponent : public UStaticMeshComponent, public IHbkPrimitiveComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipCameraMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EHbkEnvShadowType HbkShadowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EHbkDynamicShadowMapType HbkDynamicShadowMapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableReceiveShadow2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableReceiveShadow3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkForwardLightType ForwardLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipKeyLight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableReceiveShadowMain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTranslucentLayer TranslucentLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHbkTranslucentLightingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableHbkTranslucentLightingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FresnelColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FresnelIntensity1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FresnelColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FresnelIntensity2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FresnelExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FresnelColorTranslucentVolume1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FresnelIntensityTranslucentVolume1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FresnelColorTranslucentVolume2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FresnelIntensityTranslucentVolume2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FresnelExponentTranslucentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramPostActivateGroup HologramPostActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramCharaPostActivateGroup HologramCharaPostActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bARPostWorldScanDisplayGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bARPostWorldScanDisplayOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMimosaLEDMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoloLightingForceLit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCameraDitherAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEnvHighlightFadeType EnvHighlightFadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvHighlightDistanceFadeStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DitherAlphaMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DefaultMaterials;
    
public:
    UHbkStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur);
    
    UFUNCTION(BlueprintCallable)
    void SetHologramPostActivateGroup(EHbkHologramPostActivateGroup InHologramPostActivateGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetHbkShadowType(EHbkEnvShadowType InHbkShadowType);
    
    UFUNCTION(BlueprintCallable)
    void SetHbkDynamicShadowMapType(EHbkDynamicShadowMapType InHbkDynamicShadowMapType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipCameraMotionBlur() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkHologramPostActivateGroup GetHologramPostActivateGroup() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSoloLightingForceLit(const bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void DisableSoloLightingForceLit(const bool bForceUpdate);
    

    // Fix for true pure virtual functions not being implemented
};

