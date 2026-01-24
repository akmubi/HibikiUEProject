#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_ChangeBitStateForShotFourCombi.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_ChangeBitStateForShotFourCombi : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Flag;
    
    UHbkAnimNotify_ChangeBitStateForShotFourCombi();

};

