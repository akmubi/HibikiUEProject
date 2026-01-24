#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EAreaPointRangeType.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_RangeGrid.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UEnvQueryGenerator_RangeGrid : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> QueryContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaPointRangeType RangeType;
    
public:
    UEnvQueryGenerator_RangeGrid();

};

