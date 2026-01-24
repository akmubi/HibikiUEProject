#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 1;
    this->bAutoConnectToWAAPI = false;
    this->DefaultOcclusionCollisionChannel = ECC_GameTraceChannel2;
    this->SplitSwitchContainerMedia = false;
    this->SplitMediaPerFolder = false;
    this->UseEventBasedPackaging = false;
    this->EnableAutomaticAssetSynchronization = false;
    this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
    this->AskedToUseNewAssetManagement = true;
    this->bEnableMultiCoreRendering = false;
    this->MigratedEnableMultiCoreRendering = false;
    this->FixupRedirectorsDuringMigration = false;
    this->DefaultAkSphereComponent2OcclusionCollisionChannel = ECC_GameTraceChannel2;
    this->DefaultSpatialAudioVolumeCollisionProfileName = TEXT("Sound_Default");
    this->DefaultAcousticPortalObstructionCollisionChannel = ECC_GameTraceChannel2;
    this->DefaultAcousticPortalCollisionProfileName = TEXT("Sound_Only");
    this->DefaultakMPLOcclusionCollisionChannel = ECC_GameTraceChannel2;
    this->OcclusionCollisionChannelSound = ECC_GameTraceChannel2;
    this->OcclusionCollisionChannelSoundNoOcclusion = ECC_GameTraceChannel2;
    this->OcclusionCollisionChannelSoundObject = ECC_GameTraceChannel1;
    this->fFR = 45.00f;
    this->FSR = 90.00f;
    this->fSBR = 135.00f;
    this->fFHeight = 54.70f;
    this->PrepareBankPoolSizeMB = 1;
    this->ResidentBanks.AddDefaulted(4);
    this->bCreateListenerForPlayerCameraManagerOnly = false;
    this->TpsListenerCoef = 0.80f;
    this->RoomRefreshInterval = 0.15f;
    this->UpdateRoomMinimumDistanceSquared = 144.00f;
    this->bHapticFeedbackWithMotionEnabled = true;
    this->MotionDeviceStateGroupe = TEXT("ST_Sys_Win_DualSense");
    this->HapticFeedbackStateON = TEXT("ST_Sys_Win_DualSense_ON");
    this->HapticFeedbackStateOFF = TEXT("ST_Sys_Win_DualSense_OFF");
    this->SCEOutputStateGroup = TEXT("ST_Sys_SCE_Output");
    this->SCEOutputSceneBaseState = TEXT("ST_Sys_SCE_Output_SceneBase");
    this->SCEOutputChannelBaseState = TEXT("ST_Sys_SCE_Output_ChannelBase");
    this->SCEHeadphoneStateGroup = TEXT("ST_Sys_SCE_Headphone");
    this->SCEHeadphoneStateTrue = TEXT("ST_Sys_SCE_Headphone_True");
    this->SCEHeadphoneStateFalse = TEXT("ST_Sys_SCE_Headphone_False");
}


