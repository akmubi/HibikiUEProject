#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500EnergyWallStartingPointParam.h"
#include "HbkEm7500EnergyWallStartingPointWorkParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500EnergyWallStartingPointWorkParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500EnergyWallStartingPointParam StartingPointParam;
    
    HIBIKI_API FHbkEm7500EnergyWallStartingPointWorkParam();
};

