#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0660_StartExplosionBeam.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0660_StartExplosionBeam : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamStartBoneName;
    
public:
    UHbkAnimNotify_em0660_StartExplosionBeam();

};

