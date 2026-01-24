#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_RhythmPillarType.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_RhythmPillarBaseAction.h"
#include "HbkGimmick_RhythmPillarPhase.h"
#include "HbkGimmick_RhythmPillar.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_RhythmPillar : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_RhythmPillarType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmPillarBaseAction ActionBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmPillarPhase> Phase;
    
public:
    AHbkGimmick_RhythmPillar(const FObjectInitializer& ObjectInitializer);

};

