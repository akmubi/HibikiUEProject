#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_VendingMachineCan.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkGimmick_VendingMachineCan : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
    AHbkGimmick_VendingMachineCan(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

