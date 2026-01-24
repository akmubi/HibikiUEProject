#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyCharacter.h"
#include "HbkEm0720_EliteShield.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

UCLASS(Blueprintable)
class AHbkEm0720_EliteShield : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> BlockingAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReplledAnimOnShield;
    
public:
    AHbkEm0720_EliteShield(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBreakWeapon();
    
};

