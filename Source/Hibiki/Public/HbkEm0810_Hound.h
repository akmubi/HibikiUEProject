#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkEnemyCharacter.h"
#include "Templates/SubclassOf.h"
#include "HbkEm0810_Hound.generated.h"

class AHbkEm0810_ArmBlade;
class AHbkEm0812_HoundGhost;
class UAnimSequenceBase;
class UHbkEnemyComboAttackComponent;

UCLASS(Blueprintable)
class AHbkEm0810_Hound : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEnemyComboAttackComponent* EnemyComboAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AtkMissedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm0812_HoundGhost> HoundGhostClass;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkEm0812_HoundGhost>> HoundGhostList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AttackSlotBlendWeightList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm0810_ArmBlade> ArmBladeClass;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkEm0810_ArmBlade>> MyArmBladeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MeshkitNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmBladeRepopTime;
    
public:
    AHbkEm0810_Hound(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WarpLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRepopArmblade();
    
    UFUNCTION(BlueprintCallable)
    bool IsArmBladeLaunchEnable();
    
    UFUNCTION(BlueprintCallable)
    bool IsArmBladeLaunched();
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetAttackSlotBlendWeightList();
    
};

