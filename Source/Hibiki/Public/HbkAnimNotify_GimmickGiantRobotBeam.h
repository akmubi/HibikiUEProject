#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_GimmickGiantRobotBeam.generated.h"

class AHbkGimmick_GiantRobotBeam;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_GimmickGiantRobotBeam : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_GiantRobotBeam> BeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CanonBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttach;
    
    UHbkAnimNotify_GimmickGiantRobotBeam();

};

