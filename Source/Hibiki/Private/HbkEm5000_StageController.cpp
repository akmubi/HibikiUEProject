#include "HbkEm5000_StageController.h"

AHbkEm5000_StageController::AHbkEm5000_StageController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ActiveGameEnvPhase = EHbkEm5000GameEnvPhase::Default;
    this->EqualizerWavePattern = EHbkEqualizerWavePattern::None;
    this->DefaultChangeCameraName = TEXT("ST08_BossCamera");
    this->ControlClass = NULL;
    this->SolidVocalAssaultTypeKinds = 0;
    this->bIsRandomSolidVocalAssault = false;
    this->SolidVocalAssaultIndex = 0;
    this->SolidVocalHealth = 100.00f;
    this->IsSolidVocalExplode = false;
    this->HUDPresetType = EHbkEm5000HUDPreset::Default;
    this->HUDPreset_BridgeBreakdown = NULL;
    this->HUDPreset_RhythmParry = NULL;
    this->MirrorBallClass = NULL;
    this->SoundBlasterFestivalLaserBehaviorKinds = 0;
    this->SoundBlasterFestivalLaserSafeAngleY = 0.00f;
    this->BossAdjustLocationRowForEqualizerWave = 2;
    this->PlayerAdjustLocationRowForEqualizerWave = 7;
    this->EqualizerWaveShapePatternKinds = 0;
    this->EqualizerWaveAdditionRecoveryBeginBeatCount = 4.00f;
    this->EqualizerWaveShieldClass = NULL;
    this->SoundBlasterExecuteCount = 0;
    this->SoundBlasterReflectCount = 0;
    this->SoundBlasterReflectCountMax = 0;
    this->bIsAllowToDisplaySoundBlasterParryButton = false;
    this->bIsAlreadyLearnedSoundBlasterParry = false;
    this->BossAdjustLocationRowForBridgeBreakdown = 5;
    this->PlayerAdjustLocationRowForBridgeBreakdown = 8;
    this->bIsSoloLightingMode = false;
    this->EnvNameForInTheDark = TEXT("Default");
    this->EnvNameForInTheDarkOfCutSceneEnd = TEXT("St08Boss_CS830");
    this->ChangeCameraForInTheDark = TEXT("ST08_BossCamera_InTheDark");
    this->ChangeCameraForSideStory = TEXT("ST08_BossCamera_SideStory");
    this->BossAdjustLocationRowForSideStory = 3;
    this->BossAdjustLocationRowForRhythmParry = 6;
    this->PlayerAdjustLocationRowForRhythmParry = 9;
    this->CutInWidgetClass = NULL;
    this->bIsCallHealthLessThanHalf = false;
    this->bIsExecuteRhythmParry = false;
    this->DecalPastingAssetForPlayer = NULL;
    this->EqualizerWaveControlClass = NULL;
    this->TestNowSelectIndex = 0;
    this->TestSolidVocalAssaultType = EHbkSolidVocalAssaultType::Num;
}

void AHbkEm5000_StageController::UnregistSolidVocal(AHbkProjectile_SolidVocal* SolidVocal) {
}

void AHbkEm5000_StageController::TestSpawnSBFShiled() {
}

void AHbkEm5000_StageController::TestSpawnSBFMirrorBall() {
}

void AHbkEm5000_StageController::TestSpawnEqualizerWaveGenerator() {
}

void AHbkEm5000_StageController::TestSpawnEqualizerWaveControl() {
}

void AHbkEm5000_StageController::TestRequestFinishSBFMirrorBall() {
}

void AHbkEm5000_StageController::TestRequestFinishEqualizerWaveShield() {
}

void AHbkEm5000_StageController::TestLaunchSBFMirrorBall() {
}

void AHbkEm5000_StageController::TestDuringInstallationSBFMirrorBall() {
}

void AHbkEm5000_StageController::TestDeactiveEqualizerWaveRailCamera() {
}

void AHbkEm5000_StageController::TestActiveEqualizerWaveRailCamera() {
}

void AHbkEm5000_StageController::SwitchPhase(EHbkEm5000GameEnvPhase NewGameEnvPhase) {
}

AHbkEm5000_SBFMirrorBall* AHbkEm5000_StageController::SpawnSBFMirrorBall(const FVector& SpawnPos, const FRotator& SpawnRot) {
    return NULL;
}

void AHbkEm5000_StageController::SpawnSaberForCS0825() {
}

AHbkEm5000_EqualizerWaveShield* AHbkEm5000_StageController::SpawnEqualizerWaveShield() {
    return NULL;
}

AHbkEm5000_EqualizerWaveGenerator* AHbkEm5000_StageController::SpawnEqualizerWaveGenerator(const FVector& SpawnPos, const FRotator& SpawnRot) {
    return NULL;
}

AHbkEm5000_EqualizerWaveControl* AHbkEm5000_StageController::SpawnEqualizerWaveControl(const FVector& SpawnPos, const FRotator& SpawnRot) {
    return NULL;
}

void AHbkEm5000_StageController::SpawnEnemiesBridgeBreakdown() {
}

void AHbkEm5000_StageController::ShowCutInWidget() {
}

void AHbkEm5000_StageController::SetSoloLightingMode(bool Enable, bool bIsCutSceneEnd) {
}

void AHbkEm5000_StageController::SetPlayerCameraMode(EHbkEm5000PlayerCameraMode Mode, float BlendTime) {
}

void AHbkEm5000_StageController::SetParamSolidVocalSurroundDistance(const TMap<EHbkSolidVocalAssaultType, float>& SurroundDistance) {
}

void AHbkEm5000_StageController::SetParamSolidVocalHealth(float Health) {
}

void AHbkEm5000_StageController::SetParamSolidVocalExplode(bool IsExplode) {
}

void AHbkEm5000_StageController::SetParamSolidVocalAssaultTypeKinds(int32 Kinds) {
}

void AHbkEm5000_StageController::SetParamLaserSafeAngleY(float SafeAngle) {
}

void AHbkEm5000_StageController::SetParamLaserBehaviorKinds(int32 Kinds) {
}

void AHbkEm5000_StageController::SetParamEqualizerWaveShapePatternKinds(int32 Kinds) {
}

void AHbkEm5000_StageController::SetHUDPreset(EHbkEm5000HUDPreset Type) {
}

void AHbkEm5000_StageController::SetEqualizerWavePattern(EHbkEqualizerWavePattern Pattern) {
}

void AHbkEm5000_StageController::SetEndFinishCamera(bool Enable) {
}

void AHbkEm5000_StageController::SetBossIdleState(bool IsStand) {
}

void AHbkEm5000_StageController::SetActivateVFX_Flare(bool Activate) {
}

void AHbkEm5000_StageController::ResetSoundBlasterReflectCount(int32 Max) {
}

void AHbkEm5000_StageController::ResetPhase(int32 StateIndex) {
}

void AHbkEm5000_StageController::ResetNowSelectIndex() {
}

void AHbkEm5000_StageController::ResetActiveGameEnvPhase() {
}

bool AHbkEm5000_StageController::RequestFinishSBFMirrorBall() {
    return false;
}

void AHbkEm5000_StageController::RequestFinishEqualizerWaveShield() {
}

void AHbkEm5000_StageController::RequestFinishEqualizerWave() {
}

void AHbkEm5000_StageController::RegistSolidVocal(AHbkProjectile_SolidVocal* SolidVocal) {
}

void AHbkEm5000_StageController::RegisterSoundBlaster(AHbkProjectile_Em5000SoundBlaster* SoundBlaster) {
}

void AHbkEm5000_StageController::PrepareInTheDark() {
}

void AHbkEm5000_StageController::PlayNotifyVFX() {
}

void AHbkEm5000_StageController::PauseRhythmParry() {
}

void AHbkEm5000_StageController::OnSolidVocalControlTaskEnd(AHbkEm5000_SolidVocalControl* InSolidVocalControl) {
}

void AHbkEm5000_StageController::OnSBFMirrorBallEnd(AHbkEm5000_SBFMirrorBall* InSBFMirrorBall) {
}

void AHbkEm5000_StageController::OnOwnerAttackImpact(const AHbkCharacter* Attacker) {
}

void AHbkEm5000_StageController::OnEqualizerWaveGeneratorEnd(AHbkEm5000_EqualizerWaveGenerator* InEqualizerWaveGenerator) {
}

void AHbkEm5000_StageController::OnEqualizerWaveControlEnd(AHbkEm5000_EqualizerWaveControl* InEqualizerWaveControl) {
}

void AHbkEm5000_StageController::OnDynamicSpawnedBoss() {
}

void AHbkEm5000_StageController::OnChangeHealth(float Value, float PrevValue, float ValueRate) {
}

AHbkEm5000_SolidVocalControl* AHbkEm5000_StageController::LaunchSolidVocalControl(const FVector& SpawnPos, const FRotator& SpawnRot) {
    return NULL;
}

bool AHbkEm5000_StageController::LaunchSBFMirrorBall() {
    return false;
}

void AHbkEm5000_StageController::K2_OnEndBridgeBreakdown() {
}

bool AHbkEm5000_StageController::IsSoloLightingMode() const {
    return false;
}

bool AHbkEm5000_StageController::IsAllowToDisplaySoundBlasterParryButton() {
    return false;
}

bool AHbkEm5000_StageController::IsAllFinishedSoundBlaster() const {
    return false;
}

void AHbkEm5000_StageController::HideCutInWidget() {
}

int32 AHbkEm5000_StageController::GetSoundBlasterReflectCount() const {
    return 0;
}

AHbkEm5000_SideStoryControl* AHbkEm5000_StageController::GetSideStoryControl() const {
    return NULL;
}

AHbkEm5000_SolidVocalControl* AHbkEm5000_StageController::GetLastSolidVocalControl() const {
    return NULL;
}

AHbkEm5000_InTheDarkControl* AHbkEm5000_StageController::GetInTheDarkControl() const {
    return NULL;
}

EHbkEqualizerWavePattern AHbkEm5000_StageController::GetEqualizerWavePattern() const {
    return EHbkEqualizerWavePattern::None;
}

AHbkEm5000_EqualizerWaveControl* AHbkEm5000_StageController::GetEqualizerWaveControl() const {
    return NULL;
}

AHbkEm5000_BridgeBreakdownControl* AHbkEm5000_StageController::GetBridgeBreakdownControl() {
    return NULL;
}

EHbkEm5000GameEnvPhase AHbkEm5000_StageController::GetActiveGameEnvPhase() const {
    return EHbkEm5000GameEnvPhase::Default;
}

void AHbkEm5000_StageController::FinishSoundBlaster() {
}

void AHbkEm5000_StageController::EndBridgeBreakdown() {
}

bool AHbkEm5000_StageController::DuringInstallationSBFMirrorBall() {
    return false;
}

void AHbkEm5000_StageController::DeleteCutInWidget() {
}

void AHbkEm5000_StageController::CreateEqualizerWave(int32 InIndex) {
}

bool AHbkEm5000_StageController::CreateCutInWidget() {
    return false;
}

void AHbkEm5000_StageController::ClearSoundBlasterList() {
}

void AHbkEm5000_StageController::ChangePlayerModeBridgeBreakdown(bool Enable) {
}

void AHbkEm5000_StageController::ChangeBattleState(int32 InPhase) {
}











void AHbkEm5000_StageController::BeginBridgeBreakdown() {
}

bool AHbkEm5000_StageController::AttachSBFMirrorBall(AActor* TargetActor, FName SocketName) {
    return false;
}

void AHbkEm5000_StageController::AllAbortSolidVocalControl() {
}

void AHbkEm5000_StageController::AllAbortSolidVocal() {
}

void AHbkEm5000_StageController::AdjustLocationForSideStory() {
}

void AHbkEm5000_StageController::AdjustLocationForRhythmParry() {
}

void AHbkEm5000_StageController::AdjustLocationForEqualizerWave() {
}

void AHbkEm5000_StageController::AdjustLocationForBridgeBreakdown() {
}

bool AHbkEm5000_StageController::AddSoundBlasterReflectCount() {
    return false;
}

void AHbkEm5000_StageController::AbortSoundBlaster() {
}

void AHbkEm5000_StageController::AbortRhythmParry() {
}


