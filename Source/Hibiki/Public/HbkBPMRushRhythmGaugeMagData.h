#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushRhythmGaugeMagData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushRhythmGaugeMagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SameActionMinIncreasePointMag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SameActionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatHitIncreasePointMag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatHitIncreaseNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedDecreasePointMag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamagedDecreaseNoteCount;
    
    HIBIKI_API FHbkBPMRushRhythmGaugeMagData();
};

