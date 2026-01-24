#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_PhysicsObj.h"
#include "HbkGimmick_SubMissionDust.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_SubMissionDust : public AHbkGimmick_PhysicsObj {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableCollisionTimeSeconds;
    
public:
    AHbkGimmick_SubMissionDust(const FObjectInitializer& ObjectInitializer);

};

