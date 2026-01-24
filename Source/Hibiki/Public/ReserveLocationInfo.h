#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAreaPointRangeType.h"
#include "ReserveLocationInfo.generated.h"

class AHbkEnemyAIController;

USTRUCT(BlueprintType)
struct FReserveLocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnemyHere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEnemyAIController> EnemyAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SearchedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAreaPointRangeType RangeType;
    
    HIBIKI_API FReserveLocationInfo();
};

