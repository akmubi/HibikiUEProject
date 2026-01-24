#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireSingle.h"
#include "HbkEnemyFire_Em7500ArmBase.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class AHbkEnemyFire_Em7500ArmBase : public AHbkEnemyFireSingle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedRateCurve;
    
public:
    AHbkEnemyFire_Em7500ArmBase(const FObjectInitializer& ObjectInitializer);

};

