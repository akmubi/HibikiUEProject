#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SecDUniqueFloorSaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SecDUniqueFloor.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SecDUniqueFloor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_SecDUniqueFloorSaveType bSaveType;
    
public:
    AHbkGimmick_SecDUniqueFloor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadSuccessForSplineMove();
    
};

