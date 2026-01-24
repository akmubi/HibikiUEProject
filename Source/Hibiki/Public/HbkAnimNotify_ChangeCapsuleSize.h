#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_ChangeCapsuleSize.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_ChangeCapsuleSize : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    UHbkAnimNotify_ChangeCapsuleSize();

};

