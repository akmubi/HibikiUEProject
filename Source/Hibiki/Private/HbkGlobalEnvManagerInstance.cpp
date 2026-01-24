#include "HbkGlobalEnvManagerInstance.h"

UHbkGlobalEnvManagerInstance::UHbkGlobalEnvManagerInstance() {
    this->ActiveEnginePostProcessVolumeActor = NULL;
    this->ActiveMultiCameraCompositionActor = NULL;
    this->ActiveGlobalCineLightingActor = NULL;
    this->ActiveCineGameEnvActor = NULL;
    this->ActivePostProcessVolumeActor = NULL;
    this->ActiveEnginePostProcessVolumePatchActor = NULL;
    this->ActivePlayerActor = NULL;
    this->GameEnvStateTester = NULL;
    this->HighlightStateTester = NULL;
    this->ToonMaskingStateTester = NULL;
    this->ARPostStateTester = NULL;
    this->GlitchStateTester = NULL;
    this->PixelateStateTester = NULL;
    this->HitImpactStateTester = NULL;
    this->HologramPostStateTester = NULL;
    this->HologramCharaPostStateTester = NULL;
    this->SoloLightingStateTester = NULL;
    this->World = NULL;
}

void UHbkGlobalEnvManagerInstance::UpdateWeaponsForPSEDitherAlpha(const AHbkCharacter* Actor, bool bInForceDisablePSE) {
}

void UHbkGlobalEnvManagerInstance::UpdatePrimitiveComponentsForPSEDitherAlpha_HbkCharacter(const AHbkCharacter* Actor, const bool bInForceDisablePSE) {
}

void UHbkGlobalEnvManagerInstance::UpdatePrimitiveComponentsForPSEDitherAlpha(const AActor* Actor, const bool bInForceDisablePSE) {
}

void UHbkGlobalEnvManagerInstance::SetCopyBackBufferWallpaper(UTexture* Texture) {
}

void UHbkGlobalEnvManagerInstance::SetCopyBackBufferBlackMaskCharacters(const bool bBlackMaskCharacters) {
}

bool UHbkGlobalEnvManagerInstance::IsInterferenceCRTPatchActive() const {
    return false;
}

bool UHbkGlobalEnvManagerInstance::IsHbkSoloLightingActive() const {
    return false;
}

UHbkPhotoModeRenderer* UHbkGlobalEnvManagerInstance::GetPhotoModeRenderer() {
    return NULL;
}

UHbkPhotoModePostProcess* UHbkGlobalEnvManagerInstance::GetPhotoModePostProcess() {
    return NULL;
}

FString UHbkGlobalEnvManagerInstance::GetHbkPostProcessVolumeString() const {
    return TEXT("");
}

FString UHbkGlobalEnvManagerInstance::GetHbkGlobalCineLightingActorLabelString() const {
    return TEXT("");
}

TArray<FString> UHbkGlobalEnvManagerInstance::GetHbkGlobalCineLightingActorLabels() const {
    return TArray<FString>();
}

FString UHbkGlobalEnvManagerInstance::GetHbkEnginePostProcessVolumeString() const {
    return TEXT("");
}

UHbkGameEnvStateManager* UHbkGlobalEnvManagerInstance::GetGameEnvStateManager() {
    return NULL;
}

UHbkGameEnvPhaseManager* UHbkGlobalEnvManagerInstance::GetGameEnvPhaseManager() {
    return NULL;
}

UHbkCopyBackBuffer* UHbkGlobalEnvManagerInstance::GetCopyBackBuffer() {
    return NULL;
}

FString UHbkGlobalEnvManagerInstance::GetActiveHbkPixelateStateDataTableRowName() const {
    return TEXT("");
}

FString UHbkGlobalEnvManagerInstance::GetActiveHbkGlitchStateDataTableRowName() const {
    return TEXT("");
}

FString UHbkGlobalEnvManagerInstance::GetActiveHbkGameEnvStateDataTableRowName() const {
    return TEXT("");
}

FString UHbkGlobalEnvManagerInstance::GetActiveHbkGameEnvPhase() const {
    return TEXT("");
}

void UHbkGlobalEnvManagerInstance::ForceDisablePSE(const bool bForceDisable) {
}

UHbkToonMaskingStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkToonMaskingStateTester() {
    return NULL;
}

UHbkSoloLightingStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkSoloLightingStateTester() {
    return NULL;
}

UHbkPixelateStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkPixelateStateTester() {
    return NULL;
}

UHbkHologramPostStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkHologramPostStateTester() {
    return NULL;
}

UHbkHologramCharaPostStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkHologramCharaPostStateTester() {
    return NULL;
}

UHbkHitImpactStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkHitImpactStateTester() {
    return NULL;
}

UHbkHighlightStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkHighlightStateTester() {
    return NULL;
}

UHbkGlitchStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkGlitchStateTester() {
    return NULL;
}

UHbkGameEnvStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkGameEnvStateTester() {
    return NULL;
}

UHbkARPostStateTester* UHbkGlobalEnvManagerInstance::FindOrCreateHbkARPostStateTester() {
    return NULL;
}

void UHbkGlobalEnvManagerInstance::EndRadialBlur() {
}

void UHbkGlobalEnvManagerInstance::EndPhotoModeRenderer() {
}

void UHbkGlobalEnvManagerInstance::EndPhotoModeForegroundMask() {
}

void UHbkGlobalEnvManagerInstance::EndPhotoMode() {
}

void UHbkGlobalEnvManagerInstance::EndInterferenceCRTPatch() {
}

void UHbkGlobalEnvManagerInstance::EndHbkSoloLighting() {
}

void UHbkGlobalEnvManagerInstance::EndHbkPixelate() {
}

void UHbkGlobalEnvManagerInstance::EndHbkHologramPost() {
}

void UHbkGlobalEnvManagerInstance::EndHbkHologramCharaPost3() {
}

void UHbkGlobalEnvManagerInstance::EndHbkHologramCharaPost2() {
}

void UHbkGlobalEnvManagerInstance::EndHbkHologramCharaPost() {
}

void UHbkGlobalEnvManagerInstance::EndHbkHitImpact() {
}

void UHbkGlobalEnvManagerInstance::EndHbkGlitch() {
}

void UHbkGlobalEnvManagerInstance::EndHbkARPost() {
}

void UHbkGlobalEnvManagerInstance::EndCopyBackBufferEveryFrame() {
}

void UHbkGlobalEnvManagerInstance::EndCopyBackBufferBlendUI() {
}

void UHbkGlobalEnvManagerInstance::EndBlockNoiseGlitchUI() {
}

void UHbkGlobalEnvManagerInstance::EndAllGameEnv() {
}

void UHbkGlobalEnvManagerInstance::CopyBackBufferOnlyThisFrame() {
}

void UHbkGlobalEnvManagerInstance::BeginRadialBlur(const FName& RowName) {
}

void UHbkGlobalEnvManagerInstance::BeginPhotoModeRenderer() {
}

void UHbkGlobalEnvManagerInstance::BeginPhotoModeForegroundMask() {
}

void UHbkGlobalEnvManagerInstance::BeginPhotoMode() {
}

void UHbkGlobalEnvManagerInstance::BeginInterferenceCRTPatch() {
}

void UHbkGlobalEnvManagerInstance::BeginHbkSoloLighting(const FName& RowName) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkPixelateState(const EHbkPixelateState PixelateState) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkPixelate(const FName& RowName, const EHbkPixelateState PixelateState) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkHologramPost(const FName& RowName, const EHbkHologramPostActivateGroup ActiveHologramPostActivateGroup, const bool bHologramAppear) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkHologramCharaPostExtPatch(const FName& RowName, const EHbkHologramCharaPostActivateGroup ActiveHologramCharaPostActivateGroup, const bool bHologramAppear, const float PlaySpeedMultPatch) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkHologramCharaPost3(const FName& RowName, const EHbkHologramCharaPostActivateGroup ActiveHologramCharaPostActivateGroup, const bool bHologramAppear) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkHologramCharaPost2(const FName& RowName, const EHbkHologramCharaPostActivateGroup ActiveHologramCharaPostActivateGroup, const bool bHologramAppear) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkHologramCharaPost(const FName& RowName, const EHbkHologramCharaPostActivateGroup ActiveHologramCharaPostActivateGroup, const bool bHologramAppear) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkHitImpact(const FName& RowName, const EHbkHitImpactState HitImpactState) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkGlitchState(const EHbkGlitchState GlitchState) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkGlitch(const FName& RowName, const EHbkGlitchState GlitchState) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkARPostState(const EHbkARPostState ARPostState) {
}

void UHbkGlobalEnvManagerInstance::BeginHbkARPost(const FName& RowName, const EHbkARPostState ARPostState) {
}

void UHbkGlobalEnvManagerInstance::BeginCopyBackBufferEveryFrame() {
}

void UHbkGlobalEnvManagerInstance::BeginCopyBackBufferBlendUI() {
}

void UHbkGlobalEnvManagerInstance::BeginBlockNoiseGlitchUI() {
}


