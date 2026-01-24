#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkCostumeModelControllerAsset.generated.h"

UCLASS(Blueprintable)
class UHbkCostumeModelControllerAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UHbkCostumeModelControllerAsset();

};

