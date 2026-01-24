#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EnemyRhythmParryCommonParam.generated.h"

USTRUCT(BlueprintType)
struct FEnemyRhythmParryCommonParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> AttackerWarpTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> AttackerLookAtTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> AudienceWarpTraceChannel;
    
    HIBIKI_API FEnemyRhythmParryCommonParam();
};

