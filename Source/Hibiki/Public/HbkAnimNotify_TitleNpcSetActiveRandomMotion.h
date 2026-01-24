#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_TitleNpcSetActiveRandomMotion.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_TitleNpcSetActiveRandomMotion : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    UHbkAnimNotify_TitleNpcSetActiveRandomMotion();

};

