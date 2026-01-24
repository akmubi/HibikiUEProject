#include "HbkPlayerCameraManager.h"

AHbkPlayerCameraManager::AHbkPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->AnimCameraTraceChannel = ECC_Camera;
    this->FinishCameraTraceChannel = ECC_WorldStatic;
    this->CameraBlockTraceChannel = ECC_WorldStatic;
    this->CameraBlockRadius = 30.00f;
}

void AHbkPlayerCameraManager::Receive_StartTKEV(const FHbkPlayingTalkEventSceneInfo& Info) {
}

void AHbkPlayerCameraManager::Receive_StartSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkPlayerCameraManager::Receive_OnEndCombat() {
}

void AHbkPlayerCameraManager::Receive_OnBeginCombat() {
}

void AHbkPlayerCameraManager::Receive_EndTKEV(const FHbkPlayingTalkEventSceneInfo& Info) {
}

void AHbkPlayerCameraManager::Receive_EndSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkPlayerCameraManager::Blueprint_ResetViewTargetToPlayerCamera(UObject* WorldContextObject, float Duration, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void AHbkPlayerCameraManager::Blueprint_EndHbkAnimCamera(UObject* WorldContextObject, float BlendOutTime, bool bIsReturnBeforeCamera, const AActor* AttachActor) {
}

void AHbkPlayerCameraManager::Blueprint_EndFinishCameraDisablePlayerInhibitControl(UObject* WorldContextObject, float BlendOutTime) {
}

void AHbkPlayerCameraManager::Blueprint_EndFinishCamera(UObject* WorldContextObject, float BlendOutTime) {
}

void AHbkPlayerCameraManager::Blueprint_BeginHbkAnimCamera(UObject* WorldContextObject, AActor* AttachActor, FName AttachName, float BlendInTime, bool bCollisionTest) {
}

bool AHbkPlayerCameraManager::Blueprint_BeginFinishCamera(UObject* WorldContextObject, AActor* FromActor, AActor* ToActor, float Duration, float BlendOut, bool bEnableSlowMotion, UAkAudioEvent* OverrideSound, bool bEnableCollisionCheck, bool bEnableResetViewTargetToPlayerCamera) {
    return false;
}

void AHbkPlayerCameraManager::Bluepirnt_EnableCameraShake(UObject* WorldContextObject) {
}

void AHbkPlayerCameraManager::Bluepirnt_DisableameraShake(UObject* WorldContextObject) {
}


