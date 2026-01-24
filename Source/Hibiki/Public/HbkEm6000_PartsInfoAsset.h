#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkEm6000_PartsInfo.h"
#include "HbkEm6000_PartsInfoAsset.generated.h"

UCLASS(Blueprintable)
class UHbkEm6000_PartsInfoAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000_PartsInfo> PartsInfos;
    
public:
    UHbkEm6000_PartsInfoAsset();

};

