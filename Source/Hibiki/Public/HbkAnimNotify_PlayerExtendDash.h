#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_PlayerExtendDash.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_PlayerExtendDash : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashTime;
    
public:
    UHbkAnimNotify_PlayerExtendDash();

};

