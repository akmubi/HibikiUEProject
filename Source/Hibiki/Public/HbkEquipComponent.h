#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEquipSlot.h"
#include "Templates/SubclassOf.h"
#include "HbkEquipComponent.generated.h"

class AActor;
class AHbkWeapon;

UCLASS(Blueprintable, EditInlineNew, HideDropdown, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEquipComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEquipSlot> EquipSlotList;
    
public:
    UHbkEquipComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Unequip(FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    void SetShowEquip(FName SlotName, bool bIsShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowAllEquip(bool bIsShow);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlot(FName SlotName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDied();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkWeapon* GetWeaponWithSlot(FName SlotName) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSlot(FName SlotName, FHbkEquipSlot& OutSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexFromName(FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool EquipFromProperty(FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool EquipFromClass(FName SlotName, TSubclassOf<AActor> EquipClass);
    
    UFUNCTION(BlueprintCallable)
    bool EquipFromActor(FName SlotName, AActor* EquipActor);
    
    UFUNCTION(BlueprintCallable)
    bool ClearTemporalAttachEquip(FName SlotName, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeTemporalAttachEquip(FName SlotName, FName NewAttachName, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSlot(FName SlotName);
    
};

