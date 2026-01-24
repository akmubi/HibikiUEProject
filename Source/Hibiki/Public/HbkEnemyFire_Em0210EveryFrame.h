#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFire_Em0210Base.h"
#include "HbkEnemyFire_Em0210EveryFrame.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class AHbkEnemyFire_Em0210EveryFrame : public AHbkEnemyFire_Em0210Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedRateCurve;
    
public:
    AHbkEnemyFire_Em0210EveryFrame(const FObjectInitializer& ObjectInitializer);

};

