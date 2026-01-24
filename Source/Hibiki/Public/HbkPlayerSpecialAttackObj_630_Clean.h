#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObj_630.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerSpecialAttackObj_630_Clean.generated.h"

class UHbkItemObject;

UCLASS(Blueprintable)
class AHbkPlayerSpecialAttackObj_630_Clean : public AHbkPlayerSpecialAttackObj_630 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHbkItemObject>> DropItemClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessDropPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedDropPercent;
    
public:
    AHbkPlayerSpecialAttackObj_630_Clean(const FObjectInitializer& ObjectInitializer);

};

