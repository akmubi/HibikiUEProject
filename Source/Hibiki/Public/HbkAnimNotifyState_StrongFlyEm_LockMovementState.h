#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Engine/EngineTypes.h"
#include "HbkAnimNotifyState_StrongFlyEm_LockMovementState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_StrongFlyEm_LockMovementState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMode;
    
public:
    UHbkAnimNotifyState_StrongFlyEm_LockMovementState();

};

