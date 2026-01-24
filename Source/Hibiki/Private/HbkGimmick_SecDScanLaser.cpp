#include "HbkGimmick_SecDScanLaser.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AHbkGimmick_SecDScanLaser::AHbkGimmick_SecDScanLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Tags.AddDefaulted(1);
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->ScanAreaCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ScanAreaCollision"));
    this->LaserWall = false;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->pActivateSE = NULL;
    this->pAleartSE = NULL;
    this->pDisarmSE = NULL;
    this->pLaserVFX = NULL;
    this->bSaveState = EHbkGimmick_SecDScanLaserSaveType::SSL_NONE;
    this->ScanAreaCollision->SetupAttachment(RootComponent);
}

void AHbkGimmick_SecDScanLaser::OnMoveEnd() {
}

void AHbkGimmick_SecDScanLaser::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkGimmick_SecDScanLaser::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_SecDScanLaser::OnBeatEvent_SecDScanLaser_Deactivate(int32 NoteCount) {
}

void AHbkGimmick_SecDScanLaser::OnBeatEvent_SecDScanLaser_Activate(int32 NoteCount) {
}


