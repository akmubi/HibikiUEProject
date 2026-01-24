#pragma once
#include "CoreMinimal.h"
#include "HbkBossQTEInputInfo.h"
#include "HbkLevelSequenceBindInfo.h"
#include "HbkBossQTESequenceInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossQTESequenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BossName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossQTEInputInfo> QTEInputInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkLevelSequenceBindInfo> Bindings;
    
    FHbkBossQTESequenceInfo();
};

