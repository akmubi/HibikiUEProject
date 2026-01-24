#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkARPostState.h"
#include "EHbkGlitchState.h"
#include "EHbkHitImpactState.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "EHbkHologramPostActivateGroup.h"
#include "EHbkPixelateState.h"
#include "HbkCustomStencil.h"
#include "HbkGraphicsSceneUtility.h"
#include "HbkStaticShadowMapDataLoading.h"
#include "HbkWorldVolumeLightingDataLoading.h"
#include "HbkGlobalEnvManagerInstance.generated.h"

class AActor;
class AHbkCharacter;
class AHbkCineGameEnvActor;
class AHbkCineToonShadingLight;
class AHbkEnginePostProcessVolume;
class AHbkEnginePostProcessVolumePatch;
class AHbkExponentialHeightFog;
class AHbkGlobalCineLightingActor;
class AHbkGlobalEnvActor;
class AHbkMultiCameraCompositionActor;
class AHbkPostProcessVolume;
class UHbkARPostStateTester;
class UHbkBg1081GraphicsComponent;
class UHbkBg1250Component;
class UHbkCopyBackBuffer;
class UHbkGameEnvPhaseManager;
class UHbkGameEnvStateManager;
class UHbkGameEnvStateTester;
class UHbkGlitchStateTester;
class UHbkHighlightStateManager;
class UHbkHighlightStateTester;
class UHbkHitImpactStateTester;
class UHbkHologramCharaPostStateTester;
class UHbkHologramPostStateTester;
class UHbkPhotoModePostProcess;
class UHbkPhotoModeRenderer;
class UHbkPixelateStateTester;
class UHbkPostProcessFiltersPatch;
class UHbkSoloLightingStateTester;
class UHbkToonMaskingStateTester;
class UPrimitiveComponent;
class UTexture;
class UTextureRenderTarget2D;
class UWorld;

UCLASS(Blueprintable, Transient)
class HIBIKI_API UHbkGlobalEnvManagerInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkEnginePostProcessVolume*> EnginePostProcessVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkEnginePostProcessVolumePatch*> EnginePostProcessVolumesPatch;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkExponentialHeightFog>> ExponentialHeightFogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkMultiCameraCompositionActor*> MultiCameraCompositionActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkPostProcessVolume*> PostProcessVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkCineToonShadingLight*> CineToonShadingLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkGlobalCineLightingActor*> GlobalCineLightingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkCineGameEnvActor*> CineGameEnvActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkGlobalEnvActor*> GlobalEnvActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> StaticShadowMapCaptureRenderTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> HbkHologramCharaPost2PrimitiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> HbkHologramCharaPost3PrimitiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkBg1081GraphicsComponent*> HbkBg1081GraphicsComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkBg1250Component*> HbkBg1250Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkStaticShadowMapDataLoading HbkStaticShadowMapLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkWorldVolumeLightingDataLoading HbkWorldVolumeLightingLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkEnginePostProcessVolume* ActiveEnginePostProcessVolumeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkMultiCameraCompositionActor* ActiveMultiCameraCompositionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkGlobalCineLightingActor* ActiveGlobalCineLightingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkCineGameEnvActor* ActiveCineGameEnvActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkPostProcessVolume* ActivePostProcessVolumeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkEnginePostProcessVolumePatch* ActiveEnginePostProcessVolumePatchActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayerActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActivePlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvStateManager* GameEnvStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHighlightStateManager* HighlightStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvStateTester* GameEnvStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHighlightStateTester* HighlightStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMaskingStateTester* ToonMaskingStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkARPostStateTester* ARPostStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGlitchStateTester* GlitchStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPixelateStateTester* PixelateStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHitImpactStateTester* HitImpactStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramPostStateTester* HologramPostStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramCharaPostStateTester* HologramCharaPostStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSoloLightingStateTester* SoloLightingStateTester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkCustomStencil CustomStencil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvPhaseManager* GameEnvPhaseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkCopyBackBuffer* CopyBackBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGraphicsSceneUtility GraphicsSceneUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPhotoModePostProcess* PhotoModePostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPhotoModeRenderer* PhotoModeRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPostProcessFiltersPatch* PostProcessFiltersPatch;
    
public:
    UHbkGlobalEnvManagerInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateWeaponsForPSEDitherAlpha(const AHbkCharacter* Actor, bool bInForceDisablePSE);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePrimitiveComponentsForPSEDitherAlpha_HbkCharacter(const AHbkCharacter* Actor, const bool bInForceDisablePSE);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePrimitiveComponentsForPSEDitherAlpha(const AActor* Actor, const bool bInForceDisablePSE);
    
    UFUNCTION(BlueprintCallable)
    void SetCopyBackBufferWallpaper(UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetCopyBackBufferBlackMaskCharacters(const bool bBlackMaskCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterferenceCRTPatchActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHbkSoloLightingActive() const;
    
    UFUNCTION(BlueprintCallable)
    UHbkPhotoModeRenderer* GetPhotoModeRenderer();
    
    UFUNCTION(BlueprintCallable)
    UHbkPhotoModePostProcess* GetPhotoModePostProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHbkPostProcessVolumeString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHbkGlobalCineLightingActorLabelString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetHbkGlobalCineLightingActorLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHbkEnginePostProcessVolumeString() const;
    
    UFUNCTION(BlueprintCallable)
    UHbkGameEnvStateManager* GetGameEnvStateManager();
    
    UFUNCTION(BlueprintCallable)
    UHbkGameEnvPhaseManager* GetGameEnvPhaseManager();
    
    UFUNCTION(BlueprintCallable)
    UHbkCopyBackBuffer* GetCopyBackBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveHbkPixelateStateDataTableRowName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveHbkGlitchStateDataTableRowName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveHbkGameEnvStateDataTableRowName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveHbkGameEnvPhase() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDisablePSE(const bool bForceDisable);
    
    UFUNCTION(BlueprintCallable)
    UHbkToonMaskingStateTester* FindOrCreateHbkToonMaskingStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkSoloLightingStateTester* FindOrCreateHbkSoloLightingStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkPixelateStateTester* FindOrCreateHbkPixelateStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkHologramPostStateTester* FindOrCreateHbkHologramPostStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkHologramCharaPostStateTester* FindOrCreateHbkHologramCharaPostStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkHitImpactStateTester* FindOrCreateHbkHitImpactStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkHighlightStateTester* FindOrCreateHbkHighlightStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkGlitchStateTester* FindOrCreateHbkGlitchStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkGameEnvStateTester* FindOrCreateHbkGameEnvStateTester();
    
    UFUNCTION(BlueprintCallable)
    UHbkARPostStateTester* FindOrCreateHbkARPostStateTester();
    
    UFUNCTION(BlueprintCallable)
    void EndRadialBlur();
    
    UFUNCTION(BlueprintCallable)
    void EndPhotoModeRenderer();
    
    UFUNCTION(BlueprintCallable)
    void EndPhotoModeForegroundMask();
    
    UFUNCTION(BlueprintCallable)
    void EndPhotoMode();
    
    UFUNCTION(BlueprintCallable)
    void EndInterferenceCRTPatch();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkSoloLighting();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkPixelate();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkHologramPost();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkHologramCharaPost3();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkHologramCharaPost2();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkHologramCharaPost();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkHitImpact();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkGlitch();
    
    UFUNCTION(BlueprintCallable)
    void EndHbkARPost();
    
    UFUNCTION(BlueprintCallable)
    void EndCopyBackBufferEveryFrame();
    
    UFUNCTION(BlueprintCallable)
    void EndCopyBackBufferBlendUI();
    
    UFUNCTION(BlueprintCallable)
    void EndBlockNoiseGlitchUI();
    
    UFUNCTION(BlueprintCallable)
    void EndAllGameEnv();
    
    UFUNCTION(BlueprintCallable)
    void CopyBackBufferOnlyThisFrame();
    
    UFUNCTION(BlueprintCallable)
    void BeginRadialBlur(const FName& RowName);
    
    UFUNCTION(BlueprintCallable)
    void BeginPhotoModeRenderer();
    
    UFUNCTION(BlueprintCallable)
    void BeginPhotoModeForegroundMask();
    
    UFUNCTION(BlueprintCallable)
    void BeginPhotoMode();
    
    UFUNCTION(BlueprintCallable)
    void BeginInterferenceCRTPatch();
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkSoloLighting(const FName& RowName);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkPixelateState(const EHbkPixelateState PixelateState);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkPixelate(const FName& RowName, const EHbkPixelateState PixelateState);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkHologramPost(const FName& RowName, const EHbkHologramPostActivateGroup ActiveHologramPostActivateGroup, const bool bHologramAppear);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkHologramCharaPostExtPatch(const FName& RowName, const EHbkHologramCharaPostActivateGroup ActiveHologramCharaPostActivateGroup, const bool bHologramAppear, const float PlaySpeedMultPatch);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkHologramCharaPost3(const FName& RowName, const EHbkHologramCharaPostActivateGroup ActiveHologramCharaPostActivateGroup, const bool bHologramAppear);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkHologramCharaPost2(const FName& RowName, const EHbkHologramCharaPostActivateGroup ActiveHologramCharaPostActivateGroup, const bool bHologramAppear);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkHologramCharaPost(const FName& RowName, const EHbkHologramCharaPostActivateGroup ActiveHologramCharaPostActivateGroup, const bool bHologramAppear);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkHitImpact(const FName& RowName, const EHbkHitImpactState HitImpactState);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkGlitchState(const EHbkGlitchState GlitchState);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkGlitch(const FName& RowName, const EHbkGlitchState GlitchState);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkARPostState(const EHbkARPostState ARPostState);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkARPost(const FName& RowName, const EHbkARPostState ARPostState);
    
    UFUNCTION(BlueprintCallable)
    void BeginCopyBackBufferEveryFrame();
    
    UFUNCTION(BlueprintCallable)
    void BeginCopyBackBufferBlendUI();
    
    UFUNCTION(BlueprintCallable)
    void BeginBlockNoiseGlitchUI();
    
};

