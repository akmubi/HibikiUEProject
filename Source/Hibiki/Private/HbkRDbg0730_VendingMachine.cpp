#include "HbkRDbg0730_VendingMachine.h"

AHbkRDbg0730_VendingMachine::AHbkRDbg0730_VendingMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VendingMachineGroupIndex = -1;
    this->ProductDataName = TEXT("Default");
    this->VendingMachineProductDT = NULL;
    this->ProductSpawnTime = 0.30f;
    this->DisableHitPlayerTime = 2.00f;
    this->DefaultBuySeRef = NULL;
    this->DefaultFallingSeRef = NULL;
    this->BreakSeRef = NULL;
    this->OverflowSeRef = NULL;
    this->BreakVfxRef = NULL;
    this->bBreaked = false;
    this->OverflowCansNum = 100;
    this->bOverflowCans = false;
}

void AHbkRDbg0730_VendingMachine::OnTurnDownEmissive() {
}

void AHbkRDbg0730_VendingMachine::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkRDbg0730_VendingMachine::OnActorDied(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkRDbg0730_VendingMachine::NotifyOnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

bool AHbkRDbg0730_VendingMachine::GetOverflowable() const {
    return false;
}


