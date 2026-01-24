#include "HbkPlayerCharacterBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "HbkAttackVariationComponent.h"
#include "HbkBeatHitComponent.h"
#include "HbkDamageComponent.h"
#include "HbkEquipComponent.h"
#include "HbkPlayerCameraComponent.h"
#include "HbkPlayerChargeComponent.h"
#include "HbkPlayerCostumeComponent.h"
#include "HbkPlayerEventAnimComponent.h"
#include "HbkPlayerFocalPointComponent.h"
#include "HbkPlayerFocusComponent.h"
#include "HbkPlayerInvincibleComponent.h"
#include "HbkPlayerMagnetComponent.h"
#include "HbkPlayerMovementComponent.h"
#include "HbkPlayerSpringArmComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkPlayerCharacterBase::AHbkPlayerCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkPlayerMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->CameraFocalPoint = CreateDefaultSubobject<UHbkPlayerFocalPointComponent>(TEXT("CameraFocalPoint"));
    this->CameraBoom = CreateDefaultSubobject<UHbkPlayerSpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UHbkPlayerCameraComponent>(TEXT("FollowCamera"));
    this->AttackVariation = CreateDefaultSubobject<UHbkAttackVariationComponent>(TEXT("AttackVariation"));
    this->TargetFocusVolume = CreateDefaultSubobject<UHbkPlayerFocusComponent>(TEXT("TargetFocus"));
    this->FocusVolumeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FocusVolumeBox"));
    this->FocusVolumeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("FocusVolumeSphere"));
    this->BeatHitComp = CreateDefaultSubobject<UHbkBeatHitComponent>(TEXT("BeatHit"));
    this->HbkEquip = CreateDefaultSubobject<UHbkEquipComponent>(TEXT("HbkEquip"));
    this->HbkDamage = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->HbkMagnet = CreateDefaultSubobject<UHbkPlayerMagnetComponent>(TEXT("HbkMagnet"));
    this->HbkPlayerInvincible = CreateDefaultSubobject<UHbkPlayerInvincibleComponent>(TEXT("HbkPlayerInvincible"));
    this->HbkChargeAttackComp = CreateDefaultSubobject<UHbkPlayerChargeComponent>(TEXT("HbkPlayerCharge"));
    this->HbkEventAnimComp = CreateDefaultSubobject<UHbkPlayerEventAnimComponent>(TEXT("HbkEventAnim"));
    this->HbkAnimFlagComp = NULL;
    this->HbkCostumeComp = CreateDefaultSubobject<UHbkPlayerCostumeComponent>(TEXT("HbkCostumeComp"));
    this->ParryCapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ParryCapsuleCollision"));
    this->bIsAzitoPlayer = false;
    this->DodgeMoveDistance = 400.00f;
    this->RhythmModeRunSpeed = 650.00f;
    this->RotationRateScale = 4.00f;
    this->RotationRateScaleAngle = 45.00f;
    this->DefaultCollisionType = ECC_WorldStatic;
    this->JustTimingDamageScale = 1.20f;
    this->AddMashDamageUpScale = 1.00f;
    this->PlayerDataAsset = NULL;
    this->HeadSocketName = TEXT("listener_socket");
    this->CameraAttachSocketName = TEXT("attach_cam_socket");
    this->bForceAutoCameraEnable = false;
    this->OverrideDamageAnim = NULL;
    this->RhythmDodgeAnim = NULL;
    this->ParryCapsuleCollision->SetupAttachment(RootComponent);
    this->CameraFocalPoint->SetupAttachment(GetMesh());
    this->CameraBoom->SetupAttachment(CameraFocalPoint);
    this->FollowCamera->SetupAttachment(CameraBoom);
    this->FocusVolumeBox->SetupAttachment(RootComponent);
    this->FocusVolumeSphere->SetupAttachment(RootComponent);
}

void AHbkPlayerCharacterBase::TeleportPosition(const FVector& Location, const FRotator& Rotation, bool bResetControlRotation, bool bResetPlayerState) {
}

void AHbkPlayerCharacterBase::StopWeaponAnim(float BlendOut) {
}

int32 AHbkPlayerCharacterBase::StartEventBeatHit(EHbkBeatHitType NewBeatHitType, FVector2D UIOffset, float UIScale) {
    return 0;
}

void AHbkPlayerCharacterBase::SetWeaponVisibility(bool visible) {
}

void AHbkPlayerCharacterBase::SetWeaponAnimPlayRate(float PlayRate) {
}

void AHbkPlayerCharacterBase::SetInhibitControl(bool Inhibit) {
}


void AHbkPlayerCharacterBase::RestartParamater() {
}

void AHbkPlayerCharacterBase::ResetMovementMode() {
}

void AHbkPlayerCharacterBase::Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkPlayerCharacterBase::Receive_PostAttackDodge(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType) {
}

void AHbkPlayerCharacterBase::Receive_PostAttackBlock(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType) {
}

void AHbkPlayerCharacterBase::Receive_OnStopEventBeatHit(int32 BHId) {
}

void AHbkPlayerCharacterBase::Receive_OnEndedInterpPosition(bool bInterrupted) {
}

void AHbkPlayerCharacterBase::Receive_OnAllMontageInstancesEnded() {
}

void AHbkPlayerCharacterBase::Receive_ActorDied() {
}





void AHbkPlayerCharacterBase::OnLanding(const FHitResult& Hit) {
}

void AHbkPlayerCharacterBase::OnInAir() {
}

void AHbkPlayerCharacterBase::OnEndFlight() {
}

void AHbkPlayerCharacterBase::OnComboWaitEffect(int32 NoteCount) {
}

bool AHbkPlayerCharacterBase::IsLocalPlayer() const {
    return false;
}

bool AHbkPlayerCharacterBase::IsJustTimingAttack(const FGameplayTagContainer& AttackTags) const {
    return false;
}

bool AHbkPlayerCharacterBase::IsInhibitControl() const {
    return false;
}

bool AHbkPlayerCharacterBase::IsAttacking(bool bUntilCombo) const {
    return false;
}

bool AHbkPlayerCharacterBase::IsArmor() const {
    return false;
}

bool AHbkPlayerCharacterBase::InCombat() const {
    return false;
}

UHbkPlayerAnimInstance* AHbkPlayerCharacterBase::GetPlayerAnimInstance() {
    return NULL;
}

int32 AHbkPlayerCharacterBase::GetJustTimingCount() const {
    return 0;
}

UHbkPlayerMovementComponent* AHbkPlayerCharacterBase::GetHbkPlayerMovement() const {
    return NULL;
}

AHbkPlayerController* AHbkPlayerCharacterBase::GetHbkController() {
    return NULL;
}

AHbkPlayerWeapon* AHbkPlayerCharacterBase::GetEquipHbkWeapon() const {
    return NULL;
}

FRotator AHbkPlayerCharacterBase::GetCameraRotation() const {
    return FRotator{};
}

FVector AHbkPlayerCharacterBase::GetCameraPosition() const {
    return FVector{};
}

float AHbkPlayerCharacterBase::GetCameraFieldOfView() const {
    return 0.0f;
}

float AHbkPlayerCharacterBase::GetArmCameraTargetLength() const {
    return 0.0f;
}

float AHbkPlayerCharacterBase::GetArmCameraSpeed() const {
    return 0.0f;
}

float AHbkPlayerCharacterBase::GetArmCameraInterpSpeed() const {
    return 0.0f;
}

bool AHbkPlayerCharacterBase::GetArmCameraFixedXY() const {
    return false;
}

void AHbkPlayerCharacterBase::ChangeGravityScale() {
}





















bool AHbkPlayerCharacterBase::Blueprint_IsStagePlayer_Implementation() const {
    return false;
}






