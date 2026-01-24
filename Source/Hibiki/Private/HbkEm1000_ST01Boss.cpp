#include "HbkEm1000_ST01Boss.h"
#include "Components/CapsuleComponent.h"

AHbkEm1000_ST01Boss::AHbkEm1000_ST01Boss(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bIsJamComboAttackInAttachWithSocket = false;
    this->TargetActorPrevLocation.AddDefaulted(3);
    this->ContinuousPunchChanceCount = 0;
    this->BeamAttackChanceCount = 0;
    this->TargetVolume = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TargetVolume"));
    this->BasePointLength = 0.00f;
    this->SpectrumOptionalName = TEXT("WaveAmplitudes0");
    this->HeadPartsMainName = TEXT("MK_em1000_basemask");
    this->HeadPartsLName = TEXT("MK_L_em1000_brparts");
    this->HeadPartsRName = TEXT("MK_R_em1000_brparts");
    this->HeadBrokenDamageScale = 2.00f;
    this->HandDamageLSlotName = TEXT("MI_em1000_finger_damage_emi_l");
    this->HandDamageRSlotName = TEXT("MI_em1000_finger_damage_emi_r");
    this->HandDamageColorOptionalName = TEXT("BaseColorIntensity");
    this->HandDamageRateOptionalName = TEXT("OpacityRate");
    this->HandRimLSlotName = TEXT("MI_em1000_base_Rim_l");
    this->HandRimRSlotName = TEXT("MI_em1000_base_Rim_r");
    this->ChestRimSlotName = TEXT("MI_em1000_base_Rim_Chest");
    this->BaseMaskRimSlotName = TEXT("MI_em1000_basebask");
    this->BaseDmLRimSlotName = TEXT("MI_em1000_base_dm_l");
    this->BaseDmRRimSlotName = TEXT("MI_em1000_base_dm_r");
    this->InheadRimSlotName = TEXT("MI_em1000_Rim_inhead");
    this->HeadLightRimSlotName = TEXT("MI_em1000_display");
    this->HeadLightDmLRimSlotName = TEXT("MI_em1000_display");
    this->HeadLightDmRRimSlotName = TEXT("MI_em1000_display");
    this->ShoulderRimSlotName = TEXT("MI_em1000_shoulder_Spectrum");
    this->MayuLightLRimSlotName = TEXT("MI_em1000_eyelight");
    this->MayuLightRRimSlotName = TEXT("MI_em1000_eyelight");
    this->MayuLightRimSlotName = TEXT("MI_em1000_eyelight");
    this->EyeLightRimSlotName = TEXT("MI_em1000_eyelight");
    this->ChestLightRimSlotName = TEXT("MI_em1000_eyelight");
    this->CoreRimSlotName = TEXT("MI_em1000_core_CircularSpec");
    this->EmissiveRimSlotName = TEXT("M_Emi_seriously");
    this->RimOptionalName = TEXT("RimLightIntensity");
    this->HeadLightRimOptionalName = TEXT("DiffuseColorIntensity");
    this->ShoulderRimOptionalName0 = TEXT("WaveColor0");
    this->ShoulderRimOptionalName1 = TEXT("WaveColor1");
    this->ShoulderRimOptionalName2 = TEXT("WaveColor2");
    this->LightRimOptionalName = TEXT("BaseColorTint");
    this->CoreRimOptionalName = TEXT("EmissiveColorTint");
    this->EmissiveRimOptionalName = TEXT("EmissiveIntensity");
    this->HeadDisplaySlotName = TEXT("M_em1000_warning");
    this->HeadDisplayOptionalName = TEXT("DiffuseColorIntensity");
    this->NormalModeMaterial_Red = NULL;
    this->NormalModeMaterial_Yellow = NULL;
    this->NormalModeMaterial_Core = NULL;
    this->NormalModeMaterial_Light = NULL;
    this->HonkiModeMaterial_Red = NULL;
    this->HonkiModeMaterial_Yellow = NULL;
    this->HonkiModeMaterial_Core = NULL;
    this->HonkiModeMaterial_Light = NULL;
    this->ActionVoiceDT = NULL;
    this->TargetVolume->SetupAttachment(RootComponent);
}

void AHbkEm1000_ST01Boss::UnbindStageTable() {
}

void AHbkEm1000_ST01Boss::StartHandAttack(bool bLeft) {
}

void AHbkEm1000_ST01Boss::StartCircleMove() {
}

void AHbkEm1000_ST01Boss::SetStageTableActor(AActor* Actor) {
}

void AHbkEm1000_ST01Boss::SetOncePunchingFlag(bool Flag) {
}

void AHbkEm1000_ST01Boss::SetEnableArmReturn(bool Enable) {
}

void AHbkEm1000_ST01Boss::ReserveBattlePhase(int32 Phase) {
}

void AHbkEm1000_ST01Boss::Receive_OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AHbkEm1000_ST01Boss::PlayActionVoice(EQa1milActionVoiceType Type, bool IsForceStopPrevious) {
}

void AHbkEm1000_ST01Boss::PerformLaunchSingleMissile(bool LeftMissle) {
}

void AHbkEm1000_ST01Boss::OnPartsDamage(FName PartName, float Damage) {
}


void AHbkEm1000_ST01Boss::OnloadCompleted() {
}

void AHbkEm1000_ST01Boss::OnLaunchSingleMissile() {
}

void AHbkEm1000_ST01Boss::OnExAttack(const FGameplayTag& ExAttackTag) {
}

void AHbkEm1000_ST01Boss::OnChangeState(int32 StateIndex) {
}



void AHbkEm1000_ST01Boss::OnArmRetrnCountDown(int32 NoteCount) {
}

void AHbkEm1000_ST01Boss::LaunchPlayer() {
}


bool AHbkEm1000_ST01Boss::IsNotCameraSpecial() {
    return false;
}

bool AHbkEm1000_ST01Boss::IsMoving() const {
    return false;
}

bool AHbkEm1000_ST01Boss::IsLeftMove() const {
    return false;
}


bool AHbkEm1000_ST01Boss::IsBrokenHeadPartsR() const {
    return false;
}

bool AHbkEm1000_ST01Boss::IsBrokenHeadPartsL() const {
    return false;
}

void AHbkEm1000_ST01Boss::InitBreakHeadParts() {
}

bool AHbkEm1000_ST01Boss::GetOncePunchingFlag() {
    return false;
}

FVector AHbkEm1000_ST01Boss::GetMoveBasePointPos() const {
    return FVector{};
}

FLinearColor AHbkEm1000_ST01Boss::GetEyeLightColor() {
    return FLinearColor{};
}

AHbkEm1000_AIController* AHbkEm1000_ST01Boss::GetEm1000AI() const {
    return NULL;
}


int32 AHbkEm1000_ST01Boss::GetBattlePhase() const {
    return 0;
}

void AHbkEm1000_ST01Boss::EndHandAttack() {
}

void AHbkEm1000_ST01Boss::EndContinuousAttack() {
}

void AHbkEm1000_ST01Boss::EndCircleMove() {
}

void AHbkEm1000_ST01Boss::ChangeColorFromMode(bool isSerious) {
}

void AHbkEm1000_ST01Boss::ChangeBattlePhase() {
}

bool AHbkEm1000_ST01Boss::CanCircleMove() const {
    return false;
}


void AHbkEm1000_ST01Boss::CallOnMissileAttack() {
}

void AHbkEm1000_ST01Boss::BreakHeadPartsR() {
}

void AHbkEm1000_ST01Boss::BreakHeadPartsL() {
}







void AHbkEm1000_ST01Boss::BindStageTable() {
}


