#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Camera/CameraTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_Gimmickbg1540_Impact.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_Gimmickbg1540_Impact : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DispTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DispCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShakePlaySpace PlaySpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator UserPlaySpaceRot;
    
public:
    UHbkAnimNotify_Gimmickbg1540_Impact();

};

