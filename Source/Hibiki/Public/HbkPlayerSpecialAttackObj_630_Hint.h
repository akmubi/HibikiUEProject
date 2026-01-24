#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObj_630.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerSpecialAttackObj_630_Hint.generated.h"

class UDamageType;

UCLASS(Blueprintable)
class AHbkPlayerSpecialAttackObj_630_Hint : public AHbkPlayerSpecialAttackObj_630 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> SuccessDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FailedDamageType;
    
public:
    AHbkPlayerSpecialAttackObj_630_Hint(const FObjectInitializer& ObjectInitializer);

};

