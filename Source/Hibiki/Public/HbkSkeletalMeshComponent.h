#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "EHbkCharacterShadowType.h"
#include "EHbkDynamicShadowMapType.h"
#include "EHbkEnvHighlightFadeType.h"
#include "EHbkForwardLightType.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "EHbkHologramPostActivateGroup.h"
#include "EHbkTranslucentLayer.h"
#include "HbkMeshKitState.h"
#include "HbkPrimitiveComponentInterface.h"
#include "HbkSkeletalMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkSkeletalMeshComponent : public USkeletalMeshComponent, public IHbkPrimitiveComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EHbkCharacterShadowType HbkCharacterShadowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EHbkDynamicShadowMapType HbkDynamicShadowMapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceDisableReceiveShadow2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceDisableReceiveShadow3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipCameraMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkForwardLightType ForwardLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipKeyLight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
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
    bool bUseHologramCharaPost2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHologramCharaPostKale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHologramCharaPostOnRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipPixelatePost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoloLightingForceLit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCameraDitherAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePSECameraDitherAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DitherAlphaMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEnvHighlightFadeType EnvHighlightFadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvHighlightDistanceFadeStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> MeshKitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedInitMeshKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DefaultMaterials;
    
public:
    UHbkSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowMeshKit(FName KitName, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowMaterialSectionBySlotName(FName materialSlotName, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowDefaultMeshKit(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur);
    
    UFUNCTION(BlueprintCallable)
    void SetHologramPostActivateGroup(EHbkHologramPostActivateGroup InHologramPostActivateGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetHbkDynamicShadowMapType(EHbkDynamicShadowMapType InHbkDynamicShadowMapType);
    
    UFUNCTION(BlueprintCallable)
    void SetHbkCharacterShadowType(EHbkCharacterShadowType InHbkCharacterShadowType);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableReceiveShadowMain(const bool bInForceDisableReceiveShadowMain);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableReceiveShadow3(const bool bInForceDisableReceiveShadow3);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableReceiveShadow2(const bool bInForceDisableReceiveShadow2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipCameraMotionBlur() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMeshKitStateAll(TArray<FHbkMeshKitState>& OutMeshKitState);
    
    UFUNCTION(BlueprintCallable)
    bool GetMeshKitState(FName MeshKitName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkHologramPostActivateGroup GetHologramPostActivateGroup() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSoloLightingForceLit(const bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void EnableSkipPixelatePost();
    
    UFUNCTION(BlueprintCallable)
    void DisableSoloLightingForceLit(const bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void DisableSkipPixelatePost();
    

    // Fix for true pure virtual functions not being implemented
};

