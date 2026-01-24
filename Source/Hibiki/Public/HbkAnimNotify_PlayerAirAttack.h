#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_PlayerAirAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_PlayerAirAttack : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirKeepTime;
    
public:
    UHbkAnimNotify_PlayerAirAttack();

};

