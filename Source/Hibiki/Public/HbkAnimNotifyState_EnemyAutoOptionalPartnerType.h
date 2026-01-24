#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHbkPartnerType.h"
#include "HbkAnimNotifyState_EnemyAutoOptionalPartnerType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_EnemyAutoOptionalPartnerType : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType OptionalPartnerType;
    
public:
    UHbkAnimNotifyState_EnemyAutoOptionalPartnerType();

};

