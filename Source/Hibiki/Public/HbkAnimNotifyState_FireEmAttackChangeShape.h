#pragma once
#include "CoreMinimal.h"
#include "FireEm_BurningAttackInfo.h"
#include "HbkAnimNotifyState_Attack2.h"
#include "HbkAnimNotifyState_FireEmAttackChangeShape.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_FireEmAttackChangeShape : public UHbkAnimNotifyState_Attack2 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOverrideAttackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFireEm_BurningAttackInfo OriginAttackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireEm_BurningAttackInfo BurningAttackInfo;
    
public:
    UHbkAnimNotifyState_FireEmAttackChangeShape();

};

