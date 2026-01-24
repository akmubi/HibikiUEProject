#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakObject.h"
#include "HbkReceiveAttackInterface.h"
#include "HbkGimmick_BreakTableSet.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_BreakTableSet : public AHbkGimmick_BreakObject, public IHbkReceiveAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapImpulseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageImpulseRate;
    
public:
    AHbkGimmick_BreakTableSet(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

