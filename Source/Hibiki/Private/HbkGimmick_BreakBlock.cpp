#include "HbkGimmick_BreakBlock.h"

AHbkGimmick_BreakBlock::AHbkGimmick_BreakBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveBreak = false;
    this->bSaveCrack = false;
    this->ObjType = EHbkGimmick_BreakObjType_t::BREAK_DOOR;
    this->breakSuffixName = TEXT("_break");
    this->ShowHideSuffixName = TEXT("_Show_Hide");
    this->HideShowSuffixName = TEXT("_Hide_Show");
    this->CrackShowHideHideSuffixName = TEXT("_Show_Hide_Hide");
    this->CrackHideShowHideSuffixName = TEXT("_Hide_Show_Hide");
    this->DebriBonePrefixName = TEXT("Debri_");
    this->BreakDebriImpulse = 1000000.00f;
    this->OverlapDebriImpulse = 10000.00f;
    this->DebriMaxNum = 0;
    this->ditherLENMatIndex = -1;
    this->ditherNumMatIndex = -1;
    this->overrideMatIndex = -1;
    this->overrideMatIndex2 = -1;
}

void AHbkGimmick_BreakBlock::SetCrack() {
}

void AHbkGimmick_BreakBlock::OnPartnerTargetPointSuccessAction() {
}

void AHbkGimmick_BreakBlock::OnPartnerTargetPointDecidedToTarget() {
}

void AHbkGimmick_BreakBlock::OnPartnerTargetPointBeginAction() {
}

void AHbkGimmick_BreakBlock::OnOverlapBreakMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_BreakBlock::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_BreakBlock::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


