#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHitImpactData.h"
#include "HbkHitImpactState.generated.h"

UCLASS(Blueprintable)
class UHbkHitImpactState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHitImpactData HitImpactData;
    
public:
    UHbkHitImpactState();

};

