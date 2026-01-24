#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_Em6000SetLcationAndRotationFromMarkingActor.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_Em6000SetLcationAndRotationFromMarkingActor : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkingActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdjustLanding;
    
    UHbkAnimNotify_Em6000SetLcationAndRotationFromMarkingActor();

};

