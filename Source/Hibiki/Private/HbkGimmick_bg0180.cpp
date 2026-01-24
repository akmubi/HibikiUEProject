#include "HbkGimmick_bg0180.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AHbkGimmick_bg0180::AHbkGimmick_bg0180(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Tags.AddDefaulted(1);
    this->gateType = BG0180_ENEMY_GATE;
    this->AutomaticFunc = false;
    this->bAutomaticOffWhilePlayLevelSequence = true;
    this->bNotOpenWhileLoading = false;
    this->bDefaultLock = false;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->AutomaticCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("AutomaticRange"));
    this->waitBarSyncActivate = false;
    this->bSaveState = EHbkGimmick_bg0180_SaveType::BG0180_SAVE_NONE;
    this->bSaveLockState = EHbkGimmick_bg0180_SaveType::BG0180_SAVE_NONE;
    this->pMeshDoorR = NULL;
    this->pMeshDoorL = NULL;
    this->pMeshDoorU = NULL;
    this->pMeshDoorD = NULL;
    this->AutomaticCollision->SetupAttachment(RootComponent);
}

void AHbkGimmick_bg0180::UnlockDoor(bool PlaySE) {
}

void AHbkGimmick_bg0180::SetDefaultEmissiveColor() {
}

void AHbkGimmick_bg0180::SetActivateEmissiveColor() {
}

void AHbkGimmick_bg0180::OnSyncActivate(const int32 Count) {
}

void AHbkGimmick_bg0180::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkGimmick_bg0180::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_bg0180::OnCommonResourceSuccess() {
}

void AHbkGimmick_bg0180::OnBarSyncAnimActivate(const int32 Count) {
}

void AHbkGimmick_bg0180::LockDoor(bool PlaySE) {
}


