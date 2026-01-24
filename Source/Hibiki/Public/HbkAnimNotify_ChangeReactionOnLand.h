#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_ChangeReactionOnLand.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_ChangeReactionOnLand : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBound;
    
public:
    UHbkAnimNotify_ChangeReactionOnLand();

};

