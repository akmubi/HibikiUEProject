#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_SquareGrid.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UEnvQueryGenerator_SquareGrid : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue GridSizeX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue GridSizeY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SpaceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
public:
    UEnvQueryGenerator_SquareGrid();

};

