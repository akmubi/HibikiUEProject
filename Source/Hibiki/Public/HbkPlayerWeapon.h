#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkPlayerWeaponSlotType.h"
#include "HbkPlayerWeaponSlot.h"
#include "HbkWeapon.h"
#include "HbkPlayerWeapon.generated.h"

class UAnimSequenceBase;
class UHbkPlayerWeaponCostumeComponent;
class UHbkSkeletalMeshComponent;
class USkeletalMesh;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerWeapon : public AHbkWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerWeaponCostumeComponent* HbkCostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPlayerWeaponSlot> WeaponSlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRealGuitarMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayIdleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveSlotName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveSlotName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveSlotName1_Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveSlotName2_Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshKitName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshKitName2;
    
public:
    AHbkPlayerWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSkeletalMesh(UHbkSkeletalMeshComponent* MeshComp, USkeletalMesh* Mesh, bool bReinitPose);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshCompToSlot(EHbkPlayerWeaponSlotType SlotType, UHbkSkeletalMeshComponent* MeshComp);
    
    UFUNCTION(BlueprintCallable)
    void PlayWeaponAnimWithSlot(EHbkPlayerWeaponSlotType SlotType, UAnimSequenceBase* Asset, FName SlotName, float BlendIn, float BlendOut, float PlayRate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRhythmSignEmissiveChange(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmSignColorChange(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void OnPostApplyCostume();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeRhythmRank(int32 NewRank, int32 OldRank);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRealGuitarMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSlot(EHbkPlayerWeaponSlotType SlotType, FHbkPlayerWeaponSlot& OutSlot);
    
};

