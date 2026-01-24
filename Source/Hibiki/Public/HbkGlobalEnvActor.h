#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkBasePassLighting.h"
#include "HbkCameraFadeDitherAlpha.h"
#include "HbkCharaCapsuleShadows.h"
#include "HbkCharacterShadow.h"
#include "HbkGameEnvProbeGI.h"
#include "HbkGlobalAnalyticFog.h"
#include "HbkGlobalStaticMeshLensFlare.h"
#include "HbkPlayerShadow.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkPlayingTalkEventSceneInfo.h"
#include "HbkUIMaterialPatch.h"
#include "HbkGlobalEnvActor.generated.h"

class UAkComponent;
class UExponentialHeightFogComponent;
class UHbkCharacterShadowSpotLightComponent;
class UHbkPlayerShadowSpotLightComponent;

UCLASS(Blueprintable)
class AHbkGlobalEnvActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* ExponentialHeightFogComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerShadowSpotLightComponent* PlayerShadowSpotLight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCharacterShadowSpotLightComponent* CharacterShadowSpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPlayerShadow PlayerShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCharacterShadow CharacterShadow2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkBasePassLighting BasePassLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkCharaCapsuleShadows CharaCapsuleShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGlobalAnalyticFog GlobalAnalyticFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGameEnvProbeGI ProbeGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkCameraFadeDitherAlpha CameraFadeDitherAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGlobalStaticMeshLensFlare StaticMeshLensFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkUIMaterialPatch UIMaterialPatch;
    
public:
    AHbkGlobalEnvActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnStartTKEV(const FHbkPlayingTalkEventSceneInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTKEV(const FHbkPlayingTalkEventSceneInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
};

