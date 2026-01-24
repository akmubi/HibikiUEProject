#include "HbkCharacter.h"
#include "AkComponent.h"
#include "HbkCharacterMovementComponent.h"
#include "HbkGameAgentComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkCharacter::AHbkCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkSkeletalMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UHbkCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->BeatSignComp = NULL;
    this->AkComp = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AdjustHeightConstantWhenSqBlendOut = 0.00f;
    this->bAdjustHeightConstantWhenSqBlendOut = false;
    this->bFootIK = false;
    this->bFlyingDurationEnable = true;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->AkComp->SetupAttachment(RootComponent);
}

void AHbkCharacter::ShowMeshKit(FName KitName, bool bShow, int32 LODIndex) {
}

void AHbkCharacter::ShowMaterialSectionBySlotName(FName materialSlotName, bool bShow, int32 LODIndex) {
}

void AHbkCharacter::ShowDefaultMeshKit(int32 LODIndex) {
}

void AHbkCharacter::ShowCharacterBySequencer() {
}

void AHbkCharacter::ShowCharacter() {
}

void AHbkCharacter::SetSuperArmor(bool SuperArmor) {
}

float AHbkCharacter::SetSlowMotion(EHbkSlowType SlowType, EHbkNote DurationNote, int32 NoteCount) {
    return 0.0f;
}

bool AHbkCharacter::SetRepulsionParamByPreset(const FName PresetName) {
    return false;
}

void AHbkCharacter::SetRepulsionEnabled(bool bEnabled) {
}

void AHbkCharacter::SetParryEnabled(bool IsParryEnable) {
}

void AHbkCharacter::SetKnockback(FVector KnockbackDir, float Knockback) {
}

void AHbkCharacter::SetInvincible(bool Invincible) {
}

void AHbkCharacter::SetInterpRotation(const FRotator& Rotator, float InterpTime) {
}

void AHbkCharacter::SetEasingInterpRotation(const FRotator& Rotator, float InterpTime) {
}

void AHbkCharacter::SetDamageFlightDuration(float Duration) {
}

void AHbkCharacter::Server_SetInterpRotation_Implementation(const FRotator& Rotator, float InterpTime) {
}
bool AHbkCharacter::Server_SetInterpRotation_Validate(const FRotator& Rotator, float InterpTime) {
    return true;
}

void AHbkCharacter::ResetGravityScale() {
}

void AHbkCharacter::ResetFlyingMovementMode(bool StopFlight) {
}

void AHbkCharacter::RemoveStateTags(const FGameplayTagContainer& RemoveTags) {
}


void AHbkCharacter::OnSyncPrepare() {
}

void AHbkCharacter::OnSyncAttackImpact(int32 NoteCount) {
}


void AHbkCharacter::LaunchHbkCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride, float NewGravityScale) {
}

void AHbkCharacter::K2_AddHbkCharacterWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AHbkCharacter::K2_AddHbkCharacterLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

bool AHbkCharacter::IsSuperArmor() const {
    return false;
}

bool AHbkCharacter::IsOnGround() const {
    return false;
}

bool AHbkCharacter::IsInvincible() const {
    return false;
}

bool AHbkCharacter::IsFloating() const {
    return false;
}

bool AHbkCharacter::IsDodging() const {
    return false;
}

bool AHbkCharacter::IsDead() const {
    return false;
}

bool AHbkCharacter::IsBlock() const {
    return false;
}

void AHbkCharacter::HideCharacter() {
}

FGameplayTagContainer AHbkCharacter::GetStateTags() const {
    return FGameplayTagContainer{};
}

UHbkRhythmSynchroComponent* AHbkCharacter::GetRhythmSynchro() const {
    return NULL;
}

UHbkCharacterMovementComponent* AHbkCharacter::GetHbkCharacterMovement() const {
    return NULL;
}

UHbkCharacterAnimInstance* AHbkCharacter::GetHbkCharaAnimInstance() const {
    return NULL;
}

UHbkAnimInstance* AHbkCharacter::GetHbkAnimInstance() const {
    return NULL;
}

AHbkAIController* AHbkCharacter::GetHbkAI() const {
    return NULL;
}

UAkComponent* AHbkCharacter::GetAkComponent() const {
    return NULL;
}

void AHbkCharacter::EndPlaySequencer(float BlendSeconds, FName TargetBoneName) {
}

void AHbkCharacter::ClearStateTags() {
}

void AHbkCharacter::ClearSlowMotion() {
}

void AHbkCharacter::ChangeAnimState(const FName& Message) {
}







void AHbkCharacter::BeginPlaySequencer(float BlendSeconds) {
}

void AHbkCharacter::AddStateTags(const FGameplayTagContainer& AddTags) {
}


