#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkHighlightData.h"
#include "HbkHighlightDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHbkHighlightDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkHighlightData> Data;
    
    UHbkHighlightDataAsset();

};

