#include "HbkEnemyElectricityComponent.h"

UHbkEnemyElectricityComponent::UHbkEnemyElectricityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageType = NULL;
    this->bIsDrawAreaDebug = false;
    this->ElectricityNote = EHbkNote::Note_Quarter;
    this->ElectricityNoteCount = 1;
    this->ElapsedNoteCount = 0;
    this->BeforeSignNote = EHbkNote::None;
    this->BeforeSignNoteCount = 0;
    this->SignNextTime = 0.00f;
    this->BeforeSignTime = 0.00f;
    this->bIsBeforeSign = false;
    this->ElectricityParticle = NULL;
    this->SignParticle = NULL;
    this->SE_OnAttack = NULL;
}

void UHbkEnemyElectricityComponent::SetAttackEnable(bool Enable) {
}

void UHbkEnemyElectricityComponent::OnElectricity() {
}

void UHbkEnemyElectricityComponent::OnBeatEventEx(int32 NoteCount, bool downBeat) {
}

void UHbkEnemyElectricityComponent::OnBeatEvent(int32 NoteCount) {
}

void UHbkEnemyElectricityComponent::OffElectricity() {
}

bool UHbkEnemyElectricityComponent::IsAttackEnable() {
    return false;
}


