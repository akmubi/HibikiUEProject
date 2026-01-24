#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObjectBase.h"
#include "HbkPlayerSpecialAttackObj_640.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerSpecialAttackObj_640 : public AHbkPlayerSpecialAttackObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayAnim;
    
public:
    AHbkPlayerSpecialAttackObj_640(const FObjectInitializer& ObjectInitializer);

};

