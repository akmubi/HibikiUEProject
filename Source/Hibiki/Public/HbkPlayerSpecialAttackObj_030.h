#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObjectBase.h"
#include "HbkPlayerSpecialAttackObj_030.generated.h"

UCLASS(Blueprintable)
class AHbkPlayerSpecialAttackObj_030 : public AHbkPlayerSpecialAttackObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddImpulseVal;
    
public:
    AHbkPlayerSpecialAttackObj_030(const FObjectInitializer& ObjectInitializer);

};

