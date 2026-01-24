#pragma once
#include "CoreMinimal.h"
#include "HbkWorldVolumeLightingDataToLoad.h"
#include "HbkWorldVolumeLightingDataLoading.generated.h"

USTRUCT(BlueprintType)
struct FHbkWorldVolumeLightingDataLoading {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkWorldVolumeLightingDataToLoad> ActorsToLoad;
    
public:
    HIBIKI_API FHbkWorldVolumeLightingDataLoading();
};

