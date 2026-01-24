#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkWeapon.generated.h"

class AHbkCharacter;
class UAnimSequenceBase;
class UMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkWeapon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoFindWeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCharacter> OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* CurrentWeaponMeshComp;
    
public:
    AHbkWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Unequip();
    
    UFUNCTION(BlueprintCallable)
    void StopWeaponSlotAnimaiton(float BlendOut, FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSlotAnimPlayRate(float PlayRate, FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMesh(UMeshComponent* NewWeaponMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleWeapon(bool NewVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetOwningCharacter(AHbkCharacter* NewOwner);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayWeaponSlotAnimaiton(UAnimSequenceBase* Asset, FName SlotName, float BlendIn, float BlendOut, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void JumpSectionWeaponSlotAnimaiton(FName SectionName);
    
protected:
    UFUNCTION(BlueprintCallable)
    AHbkCharacter* GetOwningCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* FindWeaponMesh();
    
public:
    UFUNCTION(BlueprintCallable)
    bool EquipToCharacter(AHbkCharacter* OwnerCharacter, FName SocketName, bool visible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnHiddenWeapon(bool bNewHidden);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* Blueprint_GetWeaponMesh() const;
    
};

