#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HbkAnimNotifyState_EnemyElectricityAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_EnemyElectricityAttack : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
public:
    UHbkAnimNotifyState_EnemyElectricityAttack();

};

