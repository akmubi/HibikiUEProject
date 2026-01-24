#include "HbkProjectile.h"
#include "HbkImproveAttackComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "TngSplineComponent.h"

AHbkProjectile::AHbkProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bContinuousHit = false;
    this->ContinuousHitInterval = EHbkNote::Note_16th;
    this->SplineCurveMesh = NULL;
    this->SplineCurveMeshMaterial = NULL;
    this->CurveMeshScale = 1.00f;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AttackComp = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("AttackComp"));
    this->SplineComponent = CreateDefaultSubobject<UTngSplineComponent>(TEXT("SplineComp"));
}

void AHbkProjectile::OnStartMove(int32 NoteCount) {
}

void AHbkProjectile::OnRhythmAttackNoticeTrigger() {
}

void AHbkProjectile::OnLaunchOwnerDied() {
}

FVector AHbkProjectile::GetTargetPos() const {
    return FVector{};
}

UHbkRhythmSynchroComponent* AHbkProjectile::GetRhythmSynchro() const {
    return NULL;
}

UHbkRhythmSynchroComponent* AHbkProjectile::GetOwnerRhythmSynchro() const {
    return NULL;
}





