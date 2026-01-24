#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkDebugJumpOption.h"
#include "HbkDebugJumpTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkDebugJumpTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDebugJumpOption Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    HIBIKI_API FHbkDebugJumpTableRow();
};

