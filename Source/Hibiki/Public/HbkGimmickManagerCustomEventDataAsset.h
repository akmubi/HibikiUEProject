#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkGimmickManagerCustomEventDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGimmickManagerCustomEventDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> DataTables;
    
    UHbkGimmickManagerCustomEventDataAsset();

};

