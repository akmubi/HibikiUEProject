#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "PreviewCostumeInterface.h"
#include "HbkCostumeModelAttachActor.generated.h"

class AHbkCostumeWidgetModelActor;
class UAnimMontage;
class UHbkPreviewCostumeComponent;

UCLASS(Blueprintable)
class AHbkCostumeModelAttachActor : public AActor, public IPreviewCostumeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCostumeWidgetModelActor> OwnerModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumePart PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPreviewCostumeComponent* PreviewCostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSectionName;
    
public:
    AHbkCostumeModelAttachActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPostApplyCostume(EHbkCostumePart ApplyPart, const FGameplayTag ApplyTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkCostumeWidgetModelActor* GetOwnerModel() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipPreviewCostume(const FGameplayTag& CostumeID, EHbkCostumePart CostumePart);
    
    UFUNCTION(BlueprintCallable)
    void EquipCostume(const FGameplayTag& CostumeID, EHbkCostumePart CostumePart);
    
    UFUNCTION(BlueprintCallable)
    void EndEquipPreviewCostume();
    

    // Fix for true pure virtual functions not being implemented
};

