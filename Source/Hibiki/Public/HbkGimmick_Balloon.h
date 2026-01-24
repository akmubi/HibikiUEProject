#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_BalloonBuoyancy.h"
#include "HbkGimmick_BalloonConstraint.h"
#include "HbkGimmick_BalloonOverlap.h"
#include "HbkGimmick_BalloonPhysicsControl.h"
#include "HbkGimmick_Balloon.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkGimmick_Balloon : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BalloonBuoyancy Buoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BalloonConstraint Constraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BalloonPhysicsControl> PhysicsControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BalloonOverlap Overlap;
    
public:
    AHbkGimmick_Balloon(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

