#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraManagerChangeConstrainAspectRatioDelegateDelegate.h"
#include "CameraManagerFinishCameraDelegateDelegate.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkPlayingTalkEventSceneInfo.h"
#include "HbkPlayerCameraManager.generated.h"

class AActor;
class AHbkFinishCameraActor;
class UAkAudioEvent;
class UObject;

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API AHbkPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraManagerFinishCameraDelegate OnBeginFinishCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraManagerFinishCameraDelegate OnEndedFinishCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraManagerFinishCameraDelegate OnEndedEventBlendCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraManagerChangeConstrainAspectRatioDelegate OnChangedConstrainAspectRatio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> AnimCameraTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHbkFinishCameraActor> FinishCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> FinishCameraTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CameraBlockTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlockRadius;
    
public:
    AHbkPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_StartTKEV(const FHbkPlayingTalkEventSceneInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void Receive_StartSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndCombat();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginCombat();
    
    UFUNCTION(BlueprintCallable)
    void Receive_EndTKEV(const FHbkPlayingTalkEventSceneInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void Receive_EndSequence(const FHbkPlayingLevelSeqInfo& Info);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_ResetViewTargetToPlayerCamera(UObject* WorldContextObject, float Duration, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_EndHbkAnimCamera(UObject* WorldContextObject, float BlendOutTime, bool bIsReturnBeforeCamera, const AActor* AttachActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_EndFinishCameraDisablePlayerInhibitControl(UObject* WorldContextObject, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_EndFinishCamera(UObject* WorldContextObject, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_BeginHbkAnimCamera(UObject* WorldContextObject, AActor* AttachActor, FName AttachName, float BlendInTime, bool bCollisionTest);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool Blueprint_BeginFinishCamera(UObject* WorldContextObject, AActor* FromActor, AActor* ToActor, float Duration, float BlendOut, bool bEnableSlowMotion, UAkAudioEvent* OverrideSound, bool bEnableCollisionCheck, bool bEnableResetViewTargetToPlayerCamera);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Bluepirnt_EnableCameraShake(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Bluepirnt_DisableameraShake(UObject* WorldContextObject);
    
};

