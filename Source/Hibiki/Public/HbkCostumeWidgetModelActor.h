#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "EHbkPartnerType.h"
#include "HbkCharacter.h"
#include "HbkCostumeWidgetModelCameraInfo.h"
#include "PreviewCostumeInterface.h"
#include "HbkCostumeWidgetModelActor.generated.h"

class AHbkCostumeModelAttachActor;
class UAnimMontage;
class UDataTable;
class UHbkPrevCostumeSpringArmComponent;
class UHbkPreviewCostumeComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class AHbkCostumeWidgetModelActor : public AHbkCharacter, public IPreviewCostumeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CameraParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttachParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPrevCostumeSpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPreviewCostumeComponent* PreviewCostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType CharaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkCostumePart, FHbkCostumeWidgetModelCameraInfo> PartSocketNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoInputTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToEquipOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToStoreOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToEquipRelativeRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToStoreRelativeRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkCostumeModelAttachActor*> AttachActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibleAttachActorIndex;
    
public:
    AHbkCostumeWidgetModelActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibilityAttachActor(int32 Index, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityActor(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void RotateCharacter(float AddYaw);
    
    UFUNCTION(BlueprintCallable)
    void ResetWidgetInputState();
    
    UFUNCTION(BlueprintCallable)
    void ResetSection();
    
    UFUNCTION(BlueprintCallable)
    void ResetRotateCharacter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostApplyCostume(EHbkCostumePart ApplyPart, const FGameplayTag ApplyTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWidgetInputState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpringArmComponent* GetSpringArm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableAccentMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkPartnerType GetCharaType() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSelectedPart(EHbkCostumePart PartType, bool bEnableCameraLag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_UpdateAccentMotion(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SyncroCostume();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ReceiveChangedPage(int32 PageIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EquipPreviewCostume(const FGameplayTag& CostumeID, EHbkCostumePart CostumePart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EquipCostume(const FGameplayTag& CostumeID, EHbkCostumePart CostumePart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EndEquipPreviewCostume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeMode();
    

    // Fix for true pure virtual functions not being implemented
};

