#include "HbkEquipComponent.h"
#include "Templates/SubclassOf.h"

UHbkEquipComponent::UHbkEquipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UHbkEquipComponent::Unequip(FName SlotName) {
    return false;
}

void UHbkEquipComponent::SetShowEquip(FName SlotName, bool bIsShow) {
}

void UHbkEquipComponent::SetShowAllEquip(bool bIsShow) {
}

void UHbkEquipComponent::RemoveSlot(FName SlotName) {
}

void UHbkEquipComponent::OnOwnerDied() {
}

AHbkWeapon* UHbkEquipComponent::GetWeaponWithSlot(FName SlotName) const {
    return NULL;
}

bool UHbkEquipComponent::GetSlot(FName SlotName, FHbkEquipSlot& OutSlot) {
    return false;
}

int32 UHbkEquipComponent::GetIndexFromName(FName SlotName) {
    return 0;
}

bool UHbkEquipComponent::EquipFromProperty(FName SlotName) {
    return false;
}

bool UHbkEquipComponent::EquipFromClass(FName SlotName, TSubclassOf<AActor> EquipClass) {
    return false;
}

bool UHbkEquipComponent::EquipFromActor(FName SlotName, AActor* EquipActor) {
    return false;
}

bool UHbkEquipComponent::ClearTemporalAttachEquip(FName SlotName, float InterpTime) {
    return false;
}

bool UHbkEquipComponent::ChangeTemporalAttachEquip(FName SlotName, FName NewAttachName, float InterpTime) {
    return false;
}

int32 UHbkEquipComponent::AddSlot(FName SlotName) {
    return 0;
}


