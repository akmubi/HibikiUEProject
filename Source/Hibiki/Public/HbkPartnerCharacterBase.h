#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkPartnerType.h"
#include "HbkCharacter.h"
#include "HbkInterpPositionInterface.h"
#include "HbkPartnerCharacterBase.generated.h"

class UAnimMontage;
class UHbkCostumeComponent;
class UHbkCostumeMeshComponent;
class UHbkEquipComponent;
class UHbkFaceShadowComponent;
class UHbkPartnerAnimInstance;
class UHbkPartnerAttackControlComponent;
class UHbkPartnerAttackInfoComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPartnerCharacterBase : public AHbkCharacter, public IHbkInterpPositionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerAttackInfoComponent* attackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerAttackControlComponent* AttackControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEquipComponent* HbkEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkFaceShadowComponent* HbkFaceShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* HbkCostumeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeComponent* HbkCostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType PartnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotateCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerSupportAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FirstTutorialTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstAppearFlagName;
    
public:
    AHbkPartnerCharacterBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndedInterpPosition(bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndContinuousSPA();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnDisappearMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAppearMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnActionMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAbortContinuousSPA();
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpSectionCurrentAttack(const FName& SectionName, bool bAnimBlend);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWaitingAction(const FGameplayTag& ActionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkPartnerAnimInstance* GetPartnerAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActionTypeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformAimTurn(bool bLeft);
    

    // Fix for true pure virtual functions not being implemented
};

