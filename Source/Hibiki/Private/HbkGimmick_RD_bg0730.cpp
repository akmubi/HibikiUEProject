#include "HbkGimmick_RD_bg0730.h"

AHbkGimmick_RD_bg0730::AHbkGimmick_RD_bg0730(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->VendingMachineGroupIndex = -1;
    this->ProductDataName = TEXT("Default");
    this->VendingMachineProductDT = NULL;
    this->ProductSpawnTime = 0.30f;
    this->DisableHitPlayerTime = 2.00f;
    this->DefaultBuySeRef = NULL;
    this->DefaultFallingSeRef = NULL;
    this->BreakSeRef = NULL;
    this->BreakVfxRef = NULL;
    this->bBreaked = false;
    this->bOverflowCans = false;
    this->bFinishOverflow = false;
    this->OverflowCansNum = 100;
}

void AHbkGimmick_RD_bg0730::OnTurnDownEmissive() {
}

void AHbkGimmick_RD_bg0730::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_RD_bg0730::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

bool AHbkGimmick_RD_bg0730::GetOverflowable() const {
    return false;
}


