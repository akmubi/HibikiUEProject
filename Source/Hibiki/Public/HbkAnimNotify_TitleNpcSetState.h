#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkTitleMenuNpcState.h"
#include "HbkAnimNotify_TitleNpcSetState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_TitleNpcSetState : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTitleMenuNpcState NpcState;
    
public:
    UHbkAnimNotify_TitleNpcSetState();

};

