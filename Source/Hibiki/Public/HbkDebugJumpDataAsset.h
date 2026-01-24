#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkDebugJumpDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkDebugJumpDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> DataTables;
    
    UHbkDebugJumpDataAsset();

};

