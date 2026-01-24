#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkAzitoStageSelectRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkAzitoStageSelectRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StageDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelSeqName;
    
    FHbkAzitoStageSelectRow();
};

