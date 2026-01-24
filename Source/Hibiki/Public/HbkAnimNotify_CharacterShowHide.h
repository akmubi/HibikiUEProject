#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_CharacterShowHide.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_CharacterShowHide : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShow;
    
public:
    UHbkAnimNotify_CharacterShowHide();

};

