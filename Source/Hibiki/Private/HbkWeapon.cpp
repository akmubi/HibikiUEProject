#include "HbkWeapon.h"
#include "Components/SceneComponent.h"

AHbkWeapon::AHbkWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->AutoFindWeaponMesh = false;
    this->CurrentWeaponMeshComp = NULL;
}

void AHbkWeapon::Unequip() {
}

void AHbkWeapon::StopWeaponSlotAnimaiton(float BlendOut, FName SlotName) {
}

void AHbkWeapon::SetWeaponSlotAnimPlayRate(float PlayRate, FName SlotName) {
}

void AHbkWeapon::SetWeaponMesh(UMeshComponent* NewWeaponMesh) {
}

void AHbkWeapon::SetVisibleWeapon(bool NewVisible) {
}

bool AHbkWeapon::SetOwningCharacter(AHbkCharacter* NewOwner) {
    return false;
}

void AHbkWeapon::PlayWeaponSlotAnimaiton(UAnimSequenceBase* Asset, FName SlotName, float BlendIn, float BlendOut, float PlayRate) {
}

void AHbkWeapon::JumpSectionWeaponSlotAnimaiton(FName SectionName) {
}

AHbkCharacter* AHbkWeapon::GetOwningCharacter() {
    return NULL;
}

UMeshComponent* AHbkWeapon::FindWeaponMesh_Implementation() {
    return NULL;
}

bool AHbkWeapon::EquipToCharacter(AHbkCharacter* OwnerCharacter, FName SocketName, bool visible) {
    return false;
}


UMeshComponent* AHbkWeapon::Blueprint_GetWeaponMesh() const {
    return NULL;
}


