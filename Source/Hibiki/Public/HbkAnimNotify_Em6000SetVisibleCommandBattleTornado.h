#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_Em6000SetVisibleCommandBattleTornado.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_Em6000SetVisibleCommandBattleTornado : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisibleEnable;
    
    UHbkAnimNotify_Em6000SetVisibleCommandBattleTornado();

};

