#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObj_630.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerSpecialAttackObj_630_MowingDog.generated.h"

class UDamageType;

UCLASS(Blueprintable)
class AHbkPlayerSpecialAttackObj_630_MowingDog : public AHbkPlayerSpecialAttackObj_630 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessDownStateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedDownStateCount;
    
public:
    AHbkPlayerSpecialAttackObj_630_MowingDog(const FObjectInitializer& ObjectInitializer);

};

