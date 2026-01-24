#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_Em6000StartCommandBattle.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_Em6000StartCommandBattle : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLastBattle;
    
    UHbkAnimNotify_Em6000StartCommandBattle();

};

