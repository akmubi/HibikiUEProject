#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemyRhythmGaugeData.h"
#include "HbkBPMRushRhythmGaugeAdjustPlayerAttackData.h"
#include "HbkBPMRushRhythmGaugeMagData.h"
#include "HbkBPMRushRhythmGaugeData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushRhythmGaugeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RhythmJustActionIncreasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParryIncreasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CounterIncreasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfRhythmDecreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushRhythmGaugeAdjustPlayerAttackData> AdjustPlayerAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadEnemyDefaultPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushEnemyRhythmGaugeData> EnemyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushRhythmGaugeMagData MagData;
    
    HIBIKI_API FHbkBPMRushRhythmGaugeData();
};

