#pragma once
#include "CoreMinimal.h"
#include "HbkAnimNotifyState_Attack2.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotifyState_FireEmAttack.generated.h"

class UDamageType;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_FireEmAttack : public UHbkAnimNotifyState_Attack2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> OverrideDamageType_OnBurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> OverrideDamageType_Origin;
    
    UHbkAnimNotifyState_FireEmAttack();

};

