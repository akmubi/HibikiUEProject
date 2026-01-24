#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "HbkAnimNotify_DetachFromParent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_DetachFromParent : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule LocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule RotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule ScaleRule;
    
public:
    UHbkAnimNotify_DetachFromParent();

};

