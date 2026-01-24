#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakObject.h"
#include "HbkGimmick_BreakRockFloor.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_BreakRockFloor : public AHbkGimmick_BreakObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapImpulseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageImpulseRate;
    
public:
    AHbkGimmick_BreakRockFloor(const FObjectInitializer& ObjectInitializer);

};

