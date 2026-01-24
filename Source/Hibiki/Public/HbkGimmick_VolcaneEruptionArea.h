#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_VolcaneEruptionArea.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkGimmick_VolcaneEruptionArea : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEruption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactivateWithEndOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FName> CollisionProfileNameMap;
    
public:
    AHbkGimmick_VolcaneEruptionArea(const FObjectInitializer& ObjectInitializer);

};

