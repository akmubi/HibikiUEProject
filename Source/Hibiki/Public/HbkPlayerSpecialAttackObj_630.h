#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObjectBase.h"
#include "HbkPlayerSpecialAttackObj_630.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class AHbkPlayerSpecialAttackObj_630 : public AHbkPlayerSpecialAttackObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayAnim;
    
public:
    AHbkPlayerSpecialAttackObj_630(const FObjectInitializer& ObjectInitializer);

};

