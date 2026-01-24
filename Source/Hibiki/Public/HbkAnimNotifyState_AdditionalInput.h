#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHbkAdditionalInputType.h"
#include "HbkAnimNotifyState_AdditionalInput.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_AdditionalInput : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAdditionalInputType AdditionalInputType;
    
    UHbkAnimNotifyState_AdditionalInput();

};

