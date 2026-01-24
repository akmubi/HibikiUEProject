#pragma once
#include "CoreMinimal.h"
#include "HbkDebugJumpWidgetData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FHbkDebugJumpWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    HIBIKI_API FHbkDebugJumpWidgetData();
};

