#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_VolcaneEruptionInterlock.h"
#include "HbkGimmick_VolcaneEruptionPatternOrder.h"
#include "HbkGimmick_VolcaneEruption.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_VolcaneEruption : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneEruptionInterlock Interlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_VolcaneEruptionPatternOrder> PatternOrders;
    
public:
    AHbkGimmick_VolcaneEruption(const FObjectInitializer& ObjectInitializer);

};

