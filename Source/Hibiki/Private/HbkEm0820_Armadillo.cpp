#include "HbkEm0820_Armadillo.h"

AHbkEm0820_Armadillo::AHbkEm0820_Armadillo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TipsTalkA = TEXT("ST10_2250_0020");
    this->TipsTalkB = TEXT("ST10_2250_0040");
    this->pArmorDamageVFX = NULL;
    this->pArmorBreakAllVFX = NULL;
    this->pLaserMainVFX = NULL;
    this->LaserMainPSComp = NULL;
    this->pLaserHitVFX = NULL;
    this->LaserHitPSComp = NULL;
    this->LaserAfterImageSize_ParamName = TEXT("laser1_afterimage_size");
    this->LaserMaxRange = 3000.00f;
    this->LaserAttachSocketName = TEXT("add_back_01");
    this->SubArmClass = NULL;
    this->SubarmEnableHealthRate = 0.70f;
    this->bIsSubarmTrackingToPlayer = false;
    this->SubArmStunTimer = -1.00f;
    this->bForceVisibleSubArmMesh = false;
    this->bForceCloseSubArm = false;
    this->bIsCameraWideview = false;
    this->ArmoredAttackCoolTime = 3.00f;
    this->ArmorBreakedAttackCoolTime = 0.00f;
}

void AHbkEm0820_Armadillo::Update_CameraWideview(float DeltaTime) {
}

void AHbkEm0820_Armadillo::TipsTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkEm0820_Armadillo::StartTipsTalk() {
}

void AHbkEm0820_Armadillo::SetSubarmStunTime(float NewTime) {
}

void AHbkEm0820_Armadillo::SetSubarmForceVisibility(bool NewVisiblity) {
}

void AHbkEm0820_Armadillo::SetSubarmForceClose(bool NewCloseOpt) {
}

void AHbkEm0820_Armadillo::SetAttackLocationParam(FVector TargetLocation) {
}


void AHbkEm0820_Armadillo::Receive_OnEndDamageState(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEm0820_Armadillo::Receive_OnBreakShieldAll() {
}

void AHbkEm0820_Armadillo::PlaySubrmStartupAction(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEm0820_Armadillo::PlayArmorBreakVFX(FName AttachSocketName, bool IsBreakAll) {
}

bool AHbkEm0820_Armadillo::IsSubarmTarckingToPlayer() {
    return false;
}

bool AHbkEm0820_Armadillo::IsSubarmScaleOrigin() const {
    return false;
}

bool AHbkEm0820_Armadillo::IsForceVisibleSubarm() const {
    return false;
}

bool AHbkEm0820_Armadillo::IsForceCloseSubarm() const {
    return false;
}

bool AHbkEm0820_Armadillo::IsEnableSubArm() const {
    return false;
}

bool AHbkEm0820_Armadillo::HasSubArm() const {
    return false;
}

bool AHbkEm0820_Armadillo::GetSubarmEnabledFlag() const {
    return false;
}

AHbkProjectile_Em0821SubArm* AHbkEm0820_Armadillo::GetSubarmActor(int32 Index) {
    return NULL;
}


