#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkTitleMenuNpcState.h"
#include "HbkTitleMenuNpcAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkTitleMenuNpcAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkTitleMenuNpcState, UDataTable*> RandomMotionParamTables;
    
    UHbkTitleMenuNpcAsset();

};

