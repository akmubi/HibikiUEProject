#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireBase.h"
#include "HbkEnemyFire_Em0570Fire.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class AHbkEnemyFire_Em0570Fire : public AHbkEnemyFireBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedRateCurve;
    
public:
    AHbkEnemyFire_Em0570Fire(const FObjectInitializer& ObjectInitializer);

};

