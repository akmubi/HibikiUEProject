#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ElectricTrapGenerator.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_ElectricTrapGenerator : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActivateIndexes;
    
    AHbkGimmick_ElectricTrapGenerator(const FObjectInitializer& ObjectInitializer);

};

