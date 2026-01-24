#include "HbkVS_StreamingViewer.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HbkFollowPointComponent.h"
#include "HbkPlayerCameraComponent.h"
#include "HbkPlayerFocusComponent.h"
#include "HbkPlayerSpringArmComponent.h"
#include "HbkVS_StreamingViewerMovement.h"

AHbkVS_StreamingViewer::AHbkVS_StreamingViewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkVS_StreamingViewerMovement>(TEXT("CharMoveComp"))) {
    this->bCollideWhenPlacing = false;
    this->MaxLookUp = 80.00f;
    this->MaxLookDown = 80.00f;
    this->CameraPoint = CreateDefaultSubobject<UHbkFollowPointComponent>(TEXT("CameraPoint"));
    this->CameraBoom = CreateDefaultSubobject<UHbkPlayerSpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UHbkPlayerCameraComponent>(TEXT("FollowCamera"));
    this->TargetFocusVolume = CreateDefaultSubobject<UHbkPlayerFocusComponent>(TEXT("TargetFocus"));
    this->FocusVolumeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FocusVolume"));
    this->actionTable = NULL;
    this->CameraPoint->SetupAttachment(GetMesh());
    this->CameraBoom->SetupAttachment(CameraPoint);
    this->FollowCamera->SetupAttachment(CameraBoom);
    this->FocusVolumeBox->SetupAttachment(RootComponent);
}

void AHbkVS_StreamingViewer::SpawnSpEnemyRPCFunction_Implementation(const FVector SpawnPos, const FRotator SpawnRot, const FText& UserName) {
}
bool AHbkVS_StreamingViewer::SpawnSpEnemyRPCFunction_Validate(const FVector SpawnPos, const FRotator SpawnRot, const FText& UserName) {
    return true;
}

void AHbkVS_StreamingViewer::SpawnEnemyRPCFunction_Implementation(const FVector SpawnPos, const FRotator SpawnRot, const FText& UserName) {
}
bool AHbkVS_StreamingViewer::SpawnEnemyRPCFunction_Validate(const FVector SpawnPos, const FRotator SpawnRot, const FText& UserName) {
    return true;
}

void AHbkVS_StreamingViewer::SpawnCureItemRPCFunction_Implementation(const FVector SpawnPos, const FRotator SpawnRot, const FText& userText) {
}
bool AHbkVS_StreamingViewer::SpawnCureItemRPCFunction_Validate(const FVector SpawnPos, const FRotator SpawnRot, const FText& userText) {
    return true;
}


AHbkVS_StreamingViewerHUD* AHbkVS_StreamingViewer::GetHUD() {
    return NULL;
}

void AHbkVS_StreamingViewer::BeatEvent(const int32 BeatCount) {
}


