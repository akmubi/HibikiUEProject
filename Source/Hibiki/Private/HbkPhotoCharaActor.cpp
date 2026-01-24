#include "HbkPhotoCharaActor.h"
#include "Components/CapsuleComponent.h"
#include "HbkCostumeComponent.h"
#include "HbkEquipComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkPhotoCharaActor::AHbkPhotoCharaActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->Mesh = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("Mesh"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->HbkEquip = CreateDefaultSubobject<UHbkEquipComponent>(TEXT("HbkEquip"));
    this->HbkCostumeComp = CreateDefaultSubobject<UHbkCostumeComponent>(TEXT("HbkCostumeComp"));
    this->bCheckGround = false;
    this->Mesh->SetupAttachment(RootComponent);
}

void AHbkPhotoCharaActor::SetCharaRotYaw(float RotYaw) {
}

void AHbkPhotoCharaActor::SetCharaPose(const FHbkPhotoCharaPoseInfo& PoseInfo) {
}

void AHbkPhotoCharaActor::SetCharaOffsetZ(float OffsetZ) {
}

void AHbkPhotoCharaActor::SetCharaOffsetY(float OffsetY) {
}

void AHbkPhotoCharaActor::SetCharaOffsetX(float OffsetX) {
}

void AHbkPhotoCharaActor::SetCharaEmote(const FHbkPhotoCharaEmoteInfo& EmoteInfo) {
}

void AHbkPhotoCharaActor::Blueprint_SetupChara() {
}


