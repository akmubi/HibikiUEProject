#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkDLCItemDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkDLCItemDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> DLCItemMap;
    
    UHbkDLCItemDataAsset();

};

