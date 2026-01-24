#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHbkCharacterShadowType.h"
#include "HbkAnimNotifyState_em0730_CapsuleShadowEnabled.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_em0730_CapsuleShadowEnabled : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCharacterShadowType ShadowTypeOnNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCharacterShadowType ShadowTypeOnEnd;
    
public:
    UHbkAnimNotifyState_em0730_CapsuleShadowEnabled();

};

