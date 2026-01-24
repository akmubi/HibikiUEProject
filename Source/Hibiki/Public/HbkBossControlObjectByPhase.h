#pragma once
#include "CoreMinimal.h"
#include "HbkBossControlGimmick.h"
#include "HbkBossControlObjectByPhase.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossControlObjectByPhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossControlGimmick> Gimmicks;
    
    FHbkBossControlObjectByPhase();
};

