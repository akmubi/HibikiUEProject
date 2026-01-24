#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkGT_EV1190InputResultInfo.h"
#include "HbkGT_EV1190InputResultAsset.generated.h"

UCLASS(Blueprintable)
class UHbkGT_EV1190InputResultAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGT_EV1190InputResultInfo> ResultInfoArray;
    
    UHbkGT_EV1190InputResultAsset();

};

