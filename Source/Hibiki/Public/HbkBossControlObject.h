#pragma once
#include "CoreMinimal.h"
#include "HbkBossControlGimmick.h"
#include "HbkBossControlObject.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossControlObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossControlGimmick> Gimmicks;
    
    FHbkBossControlObject();
};

