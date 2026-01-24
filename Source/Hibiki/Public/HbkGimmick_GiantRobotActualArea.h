#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_GiantRobotActualArea.generated.h"

class AHbkGimmick_GiantRobotA;

UCLASS(Blueprintable)
class AHbkGimmick_GiantRobotActualArea : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_GiantRobotA* GiantRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
public:
    AHbkGimmick_GiantRobotActualArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotation() const;
    
};

