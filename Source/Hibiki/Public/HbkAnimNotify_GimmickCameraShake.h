#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Camera/CameraTypes.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_GimmickCameraShake.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_GimmickCameraShake : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShakePlaySpace PlaySpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator UserPlaySpaceRot;
    
    UHbkAnimNotify_GimmickCameraShake();

};

