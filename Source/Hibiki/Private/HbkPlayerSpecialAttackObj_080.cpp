#include "HbkPlayerSpecialAttackObj_080.h"
#include "Components/BoxComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkPlayerSpecialAttackObj_080::AHbkPlayerSpecialAttackObj_080(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("DetectionBox"));
    this->FollowAngle = 90.00f;
    this->InterpSpeed = 5.00f;
    this->moveSpeed = 1000.00f;
    this->HitMoveSpeedRate = 0.50f;
    this->PlayAnim = NULL;
    this->DestroyNoteCount = 12;
    this->bUseRootMotion = false;
    this->StartSE = NULL;
    this->EndSE = NULL;
    this->DetectionBox->SetupAttachment(GetMesh());
}

void AHbkPlayerSpecialAttackObj_080::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkPlayerSpecialAttackObj_080::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkPlayerSpecialAttackObj_080::OnAbortSPA() {
}


