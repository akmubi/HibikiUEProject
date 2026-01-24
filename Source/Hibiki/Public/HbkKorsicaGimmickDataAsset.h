#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkKorsicaRhythmPattarnNum.h"
#include "HbkKorsicaRhythmLapDataRow.h"
#include "HbkKorsicaGimmickDataAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkKorsicaGimmickDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkKorsicaRhythmPattarnNum, FHbkKorsicaRhythmLapDataRow> AvailableMarkMap;
    
    UHbkKorsicaGimmickDataAsset();

};

