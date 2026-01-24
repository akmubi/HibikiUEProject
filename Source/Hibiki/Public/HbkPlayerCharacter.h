#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkPlayerCharacterBase.h"
#include "HbkPlayerCharacter.generated.h"

class UHbkPlayerCostumeMeshComponent;
class UHbkRhythmAssistPointComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerCharacter : public AHbkPlayerCharacterBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmAssistPointComponent* AssistOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeMeshComponent* HbkCostumeMeshCompHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeMeshComponent* HbkCostumeMeshCompTops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeMeshComponent* HbkCostumeMeshCompInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeMeshComponent* HbkCostumeMeshCompBottoms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeMeshComponent* HbkCostumeMeshCompShoes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeMeshComponent* HbkCostumeMeshCompMuffler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeMeshComponent* HbkCostumeMeshCompRoboArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeMeshComponent* HbkCostumeMeshCompAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DirectionalParryAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DirectionalParryDamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RDDirectionalParryAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RDDirectionalParryDamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RDDodgeAttack1DamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RDDodgeAttack2DamageTag;
    
public:
    AHbkPlayerCharacter(const FObjectInitializer& ObjectInitializer);

};

