#include "HbkEm6000_StageController.h"
#include "HbkEm6000_StageAreaComponent.h"
#include "HbkEm6000_StageHatchComponent.h"

AHbkEm6000_StageController::AHbkEm6000_StageController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->StageAreaComponent = CreateDefaultSubobject<UHbkEm6000_StageAreaComponent>(TEXT("HbkStageArea"));
    this->StageHatchComponent = CreateDefaultSubobject<UHbkEm6000_StageHatchComponent>(TEXT("HbkStageHatch"));
    this->CommandBattleTornadoClass = NULL;
    this->bIsEnableFinishCameraForRT = false;
    this->FinishCameraAudioEventForRT = NULL;
    this->ChangeCameraBlendTime = 1.00f;
    this->CollisionChannelForFloor = ECC_MAX;
    this->CoinSimulationClass = NULL;
    this->AudioEvent = NULL;
    this->StopEvent = NULL;
    this->bDebugCollisionDraw = false;
    this->TransformHumanAnimEm6500 = NULL;
    this->CoinSplashClass = NULL;
    this->Music3AStateEvent = NULL;
    this->Music3BStateEvent = NULL;
}

void AHbkEm6000_StageController::StartUpFloatingLaser() {
}

AHbkEm6000_CommandBattleTornado* AHbkEm6000_StageController::SpawnCommandBattleTornado(EHbkEm6000CommandBattleMode InCommandBattleMode) {
    return NULL;
}

void AHbkEm6000_StageController::SetVisibleToonMaskingHideActors(bool bIsVisible) {
}

void AHbkEm6000_StageController::SetEnableFloatingLaser(bool bEnable) {
}

void AHbkEm6000_StageController::ResetBossGaugeHealth(int32 StateIndex) {
}

void AHbkEm6000_StageController::RecoverBossGaugeHealth(float RecoverTime) {
}

bool AHbkEm6000_StageController::IsPhaseDefaultCamera() const {
    return false;
}

bool AHbkEm6000_StageController::IsDebugSelectedTag() const {
    return false;
}

AActor* AHbkEm6000_StageController::GetSteppingStoneActor(FName Name) const {
    return NULL;
}

AHbkEm6000_SafeRoomLaserControl* AHbkEm6000_StageController::GetSafeRoomLaserControl() const {
    return NULL;
}

TArray<TEnumAsByte<EObjectTypeQuery>> AHbkEm6000_StageController::GetObjectTypeQuerysForWall() const {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

TArray<TEnumAsByte<EObjectTypeQuery>> AHbkEm6000_StageController::GetObjectTypeQuerysForCharacter() const {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

FRotator AHbkEm6000_StageController::GetMarkingActorRotation(FName Name) const {
    return FRotator{};
}

FVector AHbkEm6000_StageController::GetMarkingActorLocation(FName Name) const {
    return FVector{};
}

AActor* AHbkEm6000_StageController::GetMarkingActor(FName Name) const {
    return NULL;
}

AHbkEm6000_IntermissionController* AHbkEm6000_StageController::GetIntermissionController() const {
    return NULL;
}

bool AHbkEm6000_StageController::GetDebugCollisionDraw() const {
    return false;
}

FName AHbkEm6000_StageController::GetCurrentCameraParamName() const {
    return NAME_None;
}

AHbkEm6000_CommandBattleTornado* AHbkEm6000_StageController::GetCommandBattleTornado() const {
    return NULL;
}

AHbkEm6000_CommandBattleControl* AHbkEm6000_StageController::GetCommandBattleControl() {
    return NULL;
}

TEnumAsByte<ECollisionChannel> AHbkEm6000_StageController::GetCollisionChannelForFloor() const {
    return ECC_WorldStatic;
}

AHbkEm6000_CoinDiveController* AHbkEm6000_StageController::GetCoinDiveController() const {
    return NULL;
}

int32 AHbkEm6000_StageController::GetBattleState() const {
    return 0;
}

void AHbkEm6000_StageController::EnableSteppingStoneActorCollisionAll(bool bIsEnable) {
}

void AHbkEm6000_StageController::DestroyCommandBattleTornado() {
}

void AHbkEm6000_StageController::ChangePhase(int32 StateIndex, bool bIsChangeFreeControlObjects, bool bIsChangeCamera) {
}

void AHbkEm6000_StageController::ChangeMusicState(UAkAudioEvent* StateEvent) {
}

void AHbkEm6000_StageController::ChangeFreeControlObjectsForStateIndex(int32 StateIndex) {
}

void AHbkEm6000_StageController::ChangeFreeControlObjectsForMarkName(FName MarkName) {
}

void AHbkEm6000_StageController::ChangeFinishCameraForRT(bool bIsEnable, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void AHbkEm6000_StageController::ChangeCameraForStateIndex(int32 StateIndex) {
}

void AHbkEm6000_StageController::ChangeCameraForPhaseDefault() {
}

void AHbkEm6000_StageController::ChangeCameraForCameraParamName(FName CameraParamName, float BlendTime) {
}

void AHbkEm6000_StageController::ChangeBattleState(int32 StateIndex) {
}








