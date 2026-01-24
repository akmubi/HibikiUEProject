#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RobotArmAdjustTransformParam.h"
#include "HbkGimmick_RobotArm.generated.h"

class AHbkGimmick_RobotArmRail;

UCLASS(Blueprintable)
class AHbkGimmick_RobotArm : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_RobotArmRail* RobotArmRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t curveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RobotArmAdjustTransformParam AdjustTransformParam;
    
public:
    AHbkGimmick_RobotArm(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TransitionStateStart();
    
    UFUNCTION(BlueprintCallable)
    void TransitionStateEnd();
    
    UFUNCTION(BlueprintCallable)
    void TransitionStateBootup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimMaintenance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimActive() const;
    
};

