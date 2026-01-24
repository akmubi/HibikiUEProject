#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkGameNextSeqConfig.h"
#include "HbkGameSeqConfig.h"
#include "HbkGameSeqData.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameSeqData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkGameSeqConfig> SeqConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkGameNextSeqConfig> NextSeqConfigs;
    
    UHbkGameSeqData();

};

