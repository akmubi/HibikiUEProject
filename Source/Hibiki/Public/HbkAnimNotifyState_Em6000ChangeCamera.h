#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HbkAnimNotifyState_Em6000ChangeCamera.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_Em6000ChangeCamera : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRestorePhaseDefault;
    
    UHbkAnimNotifyState_Em6000ChangeCamera();

};

