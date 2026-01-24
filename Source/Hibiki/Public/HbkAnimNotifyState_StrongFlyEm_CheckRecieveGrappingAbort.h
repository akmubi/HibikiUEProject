#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HbkAnimNotifyState_StrongFlyEm_CheckRecieveGrappingAbort.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_StrongFlyEm_CheckRecieveGrappingAbort : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoStopPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendOutTime;
    
public:
    UHbkAnimNotifyState_StrongFlyEm_CheckRecieveGrappingAbort();

};

