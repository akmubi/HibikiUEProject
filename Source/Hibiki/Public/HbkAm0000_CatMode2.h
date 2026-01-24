#pragma once
#include "CoreMinimal.h"
#include "HbkCharacter.h"
#include "HbkAm0000_CatMode2.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class UHbkCostumeComponent;
class UHbkCostumeMeshComponent;

UCLASS(Blueprintable)
class AHbkAm0000_CatMode2 : public AHbkCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* HbkCostumeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeComponent* HbkCostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RandomSectionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RandomToonMaskNames;
    
public:
    AHbkAm0000_CatMode2(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopAnimation(float BlendOut);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnimation(UAnimSequenceBase* Anim, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnPostApplyCostume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagnetRail_SwingR(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagnetRail_SwingL(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagnetRail_Die(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagnetRail_Damage(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void JumpAnimSection(const FName& NextSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShown() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeIdleAnim() const;
    
};

