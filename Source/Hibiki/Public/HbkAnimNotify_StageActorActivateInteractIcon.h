#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_StageActorActivateInteractIcon.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_StageActorActivateInteractIcon : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivateInteract;
    
public:
    UHbkAnimNotify_StageActorActivateInteractIcon();

};

