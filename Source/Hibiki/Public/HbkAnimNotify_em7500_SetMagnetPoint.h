#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm7500ArmType.h"
#include "HbkAnimNotify_em7500_SetMagnetPoint.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em7500_SetMagnetPoint : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500ArmType DownType;
    
    UHbkAnimNotify_em7500_SetMagnetPoint();

};

