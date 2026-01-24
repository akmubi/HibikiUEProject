#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0530.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_bg0530 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    AHbkGimmick_bg0530(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    FRotator GetArmRotation(FName SocketName);
    
};

