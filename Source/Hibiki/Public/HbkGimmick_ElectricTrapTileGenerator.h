#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_ElectricTrapTileGenerator.generated.h"

class AHbkGimmick_ElectricTrapGenerator;

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTileGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_ElectricTrapGenerator> ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActivateIndexes;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTileGenerator();
};

