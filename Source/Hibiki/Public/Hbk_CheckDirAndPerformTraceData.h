#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EHbkCheckDirAndPerformTraceType.h"
#include "Hbk_CheckDirAndPerformTraceData.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbk_CheckDirAndPerformTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCheckDirAndPerformTraceType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> CheckObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> CheckTraceChannel;
    
    FHbk_CheckDirAndPerformTraceData();
};

