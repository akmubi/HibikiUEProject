#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_BLDGVisuzlizerCommonInfo.h"
#include "HbkGimmick_BLDGVisuzlizerPhaseInfo.h"
#include "HbkGimmick_BLDGVisualizer.generated.h"

class UHbkSpectrumInfoComponent;

UCLASS(Blueprintable)
class AHbkGimmick_BLDGVisualizer : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSpectrumInfoComponent* SpectrumInfoComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BLDGVisuzlizerCommonInfo BaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BLDGVisuzlizerPhaseInfo> PhaseInfo;
    
public:
    AHbkGimmick_BLDGVisualizer(const FObjectInitializer& ObjectInitializer);

};

