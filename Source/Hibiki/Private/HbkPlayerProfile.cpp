#include "HbkPlayerProfile.h"

UHbkPlayerProfile::UHbkPlayerProfile() {
    this->AppliedNotificationVersion = 0;
    this->bStreamerModeEnabled = false;
    this->InputUserSettings = NULL;
    this->InputKeyMappingVersion = 0;
    this->ControlLayout = 0;
    this->RichTextBlockImageSetIndex = 0;
    this->CameraSensitivity = 0.50f;
    this->LeftStickDeadZoneScale = 1.00f;
    this->RightStickDeadZoneScale = 1.00f;
    this->MouseSensitivity = 1.00f;
    this->bInvertedAxisX = false;
    this->bInvertedAxisY = false;
    this->bForceFeedbackEnabled = true;
    this->bAdaptiveTriggersEnabled = true;
    this->bMouseSmoothingEnabled = false;
    this->bAirAttackInputEnabled = true;
    this->bInputLatencyEnabled = true;
    this->bAutoTargetCameraEnabled = true;
    this->bAutoActionEnabled = false;
    this->bHintSystemEnabled = true;
    this->RhythmEffectType = 1;
    this->bSingleButtonRhythmGame = false;
    this->bAutoRhythmParry = false;
    this->bRhythmGameEasyMode = false;
    this->WindowMode = 1;
    this->Gamma = 2.20f;
    this->FrameRateLimit = 60.00f;
    this->MotionBlurQuality = 2;
    this->ColorVisionDeficiency = EColorVisionDeficiency::NormalVision;
    this->ColorVisionSeverity = 1;
    this->DynamicShadowMaps = 2;
    this->FoliageQuality = 3;
    this->SSAOQuality = 2;
    this->DepthOfField = 2;
    this->AntiAliasing = 2;
    this->MoviePlayMode = 0;
    this->NVIDIAReflex = 0;
    this->GPUPhysicsSimulation = 1;
    this->UpscalingTechnique = EHbkUpscalingTechnique::None;
    this->DLSSQuality = 3;
    this->FSR1Quality = 2;
    this->FSR1Sharpness = 0.80f;
    this->FSR2Quality = 2;
    this->FSR2Sharpness = 0.50f;
    this->XeSSQuality = 3;
    this->TSRQuality = 2;
    this->bSceneColorFringeEnabled = true;
    this->bCameraShakeEnabled = true;
    this->bStaticShadowMapsEnabled = true;
    this->bStaticGlobalIlluminationEnabled = true;
    this->bSSREnabled = true;
    this->bVsyncEnabled = true;
    this->MasterVolume = 100.00f;
    this->MusicVolume = 100.00f;
    this->VoiceVolume = 100.00f;
    this->SFXVolume = 100.00f;
    this->InstFXVolume = 100.00f;
    this->bControllerSpeakerEnabled = true;
    this->TalkFontSize = 1;
    this->bCutsceneSubtitleEnabled = true;
    this->bCutsceneSubtitleBGEnabled = false;
    this->CutsceneSubtitleBGTransparency = 1;
    this->bCutsceneCharaNameEnabled = true;
    this->bContextSubtitleEnabled = false;
    this->bActionVoiceSubtitleEnabled = false;
    this->bInitSettingsCompleted = false;
}

UGameUserSettings* UHbkPlayerProfile::GetUserSettings() {
    return NULL;
}


